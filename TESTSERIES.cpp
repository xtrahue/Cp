#include<iostream>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    
    while(t--){
        int a[5];
        for(int i=0;i<5;i++){
            cin>>a[i] ;
        }
        
        int b=0,e=0 ;

        for(int i=0;i<5;i++){
            if(a[i]==1){
                b++ ;
            }
            if(a[i]==2){
                e++ ;
            }
        }
        if(b>e){
            cout<<"INDIA"<<endl ;
        }
        if(b<e){
            cout<<"ENGLAND"<<endl ;
        }
        if(b==e){
            cout<<"DRAW"<<endl ;
        }
    }
}