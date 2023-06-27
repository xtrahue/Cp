#include<iostream>
#include <cstdlib>
using namespace std ;

int main(){
    int i;
    cin>>i ;

    while(i--){
        int n,s ;
        cin>>n>>s ;

        if(n>=s){
            cout<<s<<endl ;
        }
        else{
            int p1=n ;
            int p2=s-n ;
            cout<<p1-p2<<endl ;
        } 
    }
}