#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int a,b,c,p,q,r ;
        cin>>a>>b>>c>>p>>q>>r ;

        int x = (p+q+r)/2 + 1- (a+b+c) ;

        if((p-a-x)>=0 || (q-b-x)>=0 || (r-c-x)>=0){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
    }
    return 0;
}