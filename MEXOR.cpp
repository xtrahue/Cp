#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int x;
        cin>>x;

        int n=x,count =0,c1=0; 
        while(n){ 
            count++ ;
            if(n&1){
                c1++ ;
            }
            n>>=1 ;
        }
        if(c1==1 && count>=2){
            cout<<x<<endl ;
        }
        else if(count==c1){
            cout<<x+1<<endl ;
        }
        else{
            cout<<pow(2,count-1)<<endl ;
        }
        
    }
}