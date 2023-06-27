#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        int a[n] ;
        for(int i=0;i<n;i++){
            cin>>a[i] ;
        }
        
        int even = 0, odd=0 ;

        for(int i=0;i<n;i++){
            if(a[i] & 1){
                odd++ ;
            }
            else{
                even++ ;
            }
        }
        
        if(odd&1){
            cout<<even<<endl ;
        }
        else{
            if(odd/2 <= even){
                cout<<odd/2<<endl ;
            }
            else{
                cout<<even<<endl ;
            }
        }
    }
}