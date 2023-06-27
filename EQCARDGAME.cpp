#include<iostream>
using namespace std ;

int ans(int n){
    for(int i=0;i<n;i++){
        if((52-i)%n==0){
            return i ;
        }
    }
    return n;
}

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;  

        int p = ans(n) ;
        cout<<p<<endl ;  
    }
}