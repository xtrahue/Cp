#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d ;

        int  s = a+b+c ;
        int count = 0;
        while(s>0){
            count++ ;
            s=s-d ;
        }

        cout<<count<<endl ;
    }

    return 0;
}