#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int x,k ;
        cin>>x>>k ;

        if(x==1){
            cout<<"2" ;
        }
        else{
            cout<<x*2;
        }
        cout<<" "<<(x*k)*(x*k-1)<<endl ;
    }

    return 0;
}