#include<bits/stdc++.h>
using namespace std ;


int main(){
    int t;
    cin>>t ;

    while(t--){
        int num,d;
        cin>>num>>d ;

        int n = num;

        int f=0,ans=0 ;
        while(n>0){
            int rem = n%10 ;
            n/=10 ;
            f++ ;
            if(rem==d){
                n=n*pow(10,f)+(rem+1)*pow(10,f-1) ;
                ans = n - num ;
                f=0 ;
            }      
        }      
        cout<<ans<<endl ;
    }
    return 0;
}