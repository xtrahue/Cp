#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        int count=0 ;

        int arr[2*n] ;

        for(int i=0;i<2*n;i++){
            cin>>arr[i] ;
        }

        for(int i=0;i<2*n;i++){
            count+=arr[i] ;
        }

        if(count&1){
            cout<<"NO"<<endl ;
        }
        else{
            cout<<"YES"<<endl ;
        }
    }
}