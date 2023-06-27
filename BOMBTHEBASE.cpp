#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,x ;
        cin>>n>>x ;

        int store = 0 ;

        int bomb[n] ;

        for(int i=0;i<n;i++){
            cin>>bomb[i] ;
        }

        for(int i=0;i<n;i++){
            if(bomb[i]<x){
                store = i+1 ;
            }
        }

        cout<<store<<endl ;
    }

    return 0;
}