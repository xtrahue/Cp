#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n][6] ;

    for(int i=0; i<n; i++){
        for(int j=0; j<6;j++){
            cin>>arr[i][j] ;
        }
    }
    
    int p=0, q=0 ;

    for(int i=0; i<n; i++){
        for(int j=0; j<3;j++){
            p+=arr[i][j] ;
            q+=arr[i][3+j] ;
        }
        if(p>q){
            cout<<"1"<<endl ;
        }
        else{
            cout<<"2"<<endl ;
        }
    }
}