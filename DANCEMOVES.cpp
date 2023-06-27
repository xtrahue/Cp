#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int x,y ;
        cin>>x>>y ;

        int s = abs(x-y) ;
        if(s&1){
            int k=s+1 ;
            cout<<(k>>=1)+1<<endl ;
        }
        else{
            cout<<(s>>=1)<<endl ;
        }
    }

    return 0;
}