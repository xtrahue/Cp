//problem code: FODCHAIN
#include<iostream>
using namespace std ;

int main(){
    int n;
    cin>>n ;

    int E[n], K[n] ; 

    for(int i=0; i<n; i++){
        cin>>E[i]>>K[i] ;
    }

    for(int i=0; i<n; i++){
        int t= E[i]/K[i] ;
        int count =1 ;
        while(t>=1){
            t = t/ K[i] ;
            count ++ ;
        }
        cout<<count<<endl ;
    }
}