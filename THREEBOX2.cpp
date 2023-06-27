#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int a,b,c,d ;
        cin>>a>>b>>c>>d ;

        int count ;

        if(a+b+c <= d){
            count=1 ;
        }
        else if((a+b <= d) || (b+c<= d) || (a+c <= d)){
            count=2 ;
        }
        else{
            count = 3;
        }
        cout<<count<<endl ;
    }
}