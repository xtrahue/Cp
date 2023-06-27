#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,count=0;
        cin>>n ;
        int temp = n;

        while(temp){
            count++ ;
            temp>>=1 ;
        }
        int p = n-pow(2,(count-1))+1 , q = pow(2,(count-1))-pow(2,(count-2));
        
        if(p>q){
            cout<<p<<endl ;
        }
        else{
            cout<<q<<endl ;
        }
    }
}