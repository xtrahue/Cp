#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,x ;
        cin>>n>>x ;

        int a[n] ;

        for(int i=0;i<n;i++){
            cin>>a[i] ;
        }
        int jack = x,p=x;

        for(int i=0;i<n;i++){
            p+=a[i] ;
            jack=max(jack,p) ;
        }
        cout<<jack<<endl ;
    }
}