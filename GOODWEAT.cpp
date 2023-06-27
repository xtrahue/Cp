#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        bool a[7] ;
        for(int i=0;i<7;i++){
            cin>>a[i] ;
        }

        int c1=0 ; 
        int c0 = 0;
        for(int i=0;i<7;i++){
            if(a[i]==1){
                c1++ ;
            }
            else{
                c0++ ;
            }
        }

        if(c1>c0){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
    }
    return 0;
}