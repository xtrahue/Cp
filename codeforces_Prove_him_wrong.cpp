#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        if(n<=18){
            long int a=1 ;

            cout<<"YES"<<endl ;
            cout<<a<<" " ;

            for(int i=2;i<=n;i++){
                a*=3 ;
                cout<<a<<" " ;
            }
            cout<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
         
    }
    return 0;
}