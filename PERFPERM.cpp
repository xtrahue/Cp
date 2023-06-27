#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,k ;
        cin>>n>>k ;

        if(n==k){
            
            for(int i=1;i<=n;i++){
                cout<<i<<" " ;
            }
            cout<<endl ;
        }
        else{
            int p= n-k+1 ;
            cout<<p<<" " ;
            for(int i=1;i<p;i++){
                cout<<i<<" " ;
            }
            for(int i=p+1;i<=n;i++){
                cout<<i<<" " ;
            }
            cout<<endl ;
        }
    }

    return 0;
}