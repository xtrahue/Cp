#include<iostream>
using namespace std ;

int main(){
    int i;
    cin>>i ;

    while(i--){
        cin>>n>>s ;

        double p=n*(n+1) ;
        double q = p/2-s ;

        if(q<=n && q>0){
            cout<<q<<endl ;
        }

        else{
            cout<<"-1"<<endl ;
        }
    }

    return 0;
}