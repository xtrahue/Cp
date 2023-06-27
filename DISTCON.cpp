#include<iostream>
using namespace std ;

int main(){
    int n;
    cin>>n ;

    if(n&1){
        cout<<"-1"<<endl ;
    }
    else{
        cout<<n/2<<" 0"<<endl ;
        cout<<-(n/2)<<" 0"<<endl ;
        cout<<"0 "<<n/2<<endl ;
        cout<<"0 "<<-(n/2)<<endl ;
    }
}