#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,c,s ;
        cin>>n>>c ;

        s=n-c ;

        if(s==0){
            cout<<n*2-1<<endl ;
        }
        else{
            cout<<c*2+s<<endl ;
        }
    }
}