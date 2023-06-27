#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int x,y,a,b ;
        cin>>x>>y>>a>>b ;

        int count=0 ;

        if(x==a || x==b){
            count++ ;
        }
        if(y==a || y==b){
            count++ ;
        }

        cout<<2-count<<endl ;
    }
}