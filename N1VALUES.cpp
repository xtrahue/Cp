//STGCONT
#include<iostream>
#include<cmath>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        long long int p=1 ;
        cin>>n ;

        if(n==1){
            cout<<"1 1"<<endl ;
        }
        else{
            cout<<"1 " ;
            for(int i=0;i<n;i++){
                cout<<p<<" ";
                p=p*2 ;
            }
            cout<<endl ;
        }
        
    }
    return 0;
}