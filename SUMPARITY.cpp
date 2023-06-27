#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,nd ;
        cin>>n>>nd ;

        if(nd&1){
            if(n&1){
                cout<<"Odd"<<endl ;
            }
            else{
                cout<<"Even"<<endl ;
            }
        }
        else if(n==1){
            cout<<"Even"<<endl ;
        }
        else{
            cout<<"Impossible"<<endl ;
        }

    }

    return 0;
}