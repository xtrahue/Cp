#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,avg ;
        cin>>n>>avg ;

        for(int i=n/2;i>0;i--){
            cout<<avg-i<<" " ;
        }
        if(n&1){
            cout<<avg<<" ";
        }
        for(int i=1;i<=n/2;i++){
            cout<<avg+i<<" ";
        }

        cout<<endl ;
    }
}