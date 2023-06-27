#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin>>n ;

    int a , b, c, d, e ;

    while(n--){
        cin>>a>>b>>c>>d >>e ;
    
      
        int p =a , q = b , r =c;

        if(p+q<=d && r<=e){
            cout<<"YES"<<endl ;
        }
        else if(p+r<=d && q<=e){
            cout<<"YES"<<endl ;
        }
        else if(q+r<=d && p<=e){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
      
    }

    return 0 ;
}