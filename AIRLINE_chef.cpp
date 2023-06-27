#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin>>n ;

    int a[n] , b[n], c[n], d[n], e[n] ;

    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i] >>e[i] ;
    }
    for(int i=0; i<n ; i++){
        int p =a[i] , q = b[i] , r =c[i];

        if(p+q<=d[i] && r<=e[i]){
            cout<<"YES"<<endl ;
        }
        else if(p+r<=d[i] && q<=e[i]){
            cout<<"YES"<<endl ;
        }
        else if(q+r<=d[i] && p<=e[i]){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
    }

    return 0 ;
}