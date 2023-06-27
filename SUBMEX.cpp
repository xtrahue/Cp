#include<iostream>
using namespace std ;

int main(){
    int t ;
    cin>>t ;

    while(t--){
        int n,k,x;
        cin>>n>>k>>x ;

        int p=n/x ;
        int r=n%x ;

        if(k<x || n<x){
            cout<<"-1"<<endl ;
        }
        else{
            if(p==0){
                for(int i=0;i<r;i++){
                    cout<<i<<" " ;
                }
                cout<<endl ;
            }
            else{
                for(int i=0;i<p;i++){
                    for(int j=0;j<x;j++){
                        cout<<j<<" " ;
                    }
                }
                for(int i=0;i<r;i++){
                    cout<<i<<" " ;
                }
                cout<<endl ;
            }
        }
    }
    return 0;
}