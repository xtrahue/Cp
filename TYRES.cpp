#include<iostream>
using namespace std ;

int main(){
    int n;
    cin>>n ;

    while(n--){
        int t;
        cin>>t ;

        int car = 0, bike =0 ;
        
        while(t){
            if(t%4==0){
              car++ ;
              t=t%4 ;
            }
           else{
              bike++ ;
              t=t%2 ;
            }
        }
        if(bike==0){
            cout<<"NO"<<endl ;
        }
        if(bike>=1){
            cout<<"YES"<<endl ;
        }
        
    }
}