#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,k ;
        cin>>n>>k ;

        for(int i=1;i<=n;i++){
            if(i<(k-1)){
                cout<<i<<" " ;
            }
            else if(i<n){
                cout<<(n-i+1)<<" " ;
            }
            else{
                cout<<n ;
            }
        }
        cout<<endl ;
    }
}