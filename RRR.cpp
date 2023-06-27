#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,k ;
        cin>>n>>k ;

        if(n&1){
            int j= n+1 ;
            if(k<=(j/4)){
                cout<<(n-k)*2<<endl ;
            }
            else if(k<=(j/2)){
                cout<<(n-(j/4+1))*2<<endl ;
            }
            else{
                cout<<((n-1)/2)*2<<endl ;
            }
        }
        else{
            int j= n ;
            if(k<=(j/2)){
                cout<<(n-k)*2<<endl ;
            }
            else if(k<=(j/1)){
                cout<<(j-(j/2))*2<<endl ;
            }
            else{
                cout<<(n/2)*2<<endl ;
            }
        }
    }
}