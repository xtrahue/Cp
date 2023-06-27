#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int k;
        cin>>k ;
        if(k&1){
            cout<<(k-1)+3<<endl ;
        }
        else{
            cout<<k<<endl ;
        }
    }

    return 0;
}