#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t ;
    
    while(t--){
        int u,v,a,s ;
        cin>>u>>v>>a>>s ;
        
        int j= (u*u - 2*a*s) ;

        if(j<=v*v){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
    }
}