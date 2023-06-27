#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int m,n,k ;
        cin>>m>>n>>k ;

        int r =  m - (n*k);
        if(r>0){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
    }
}