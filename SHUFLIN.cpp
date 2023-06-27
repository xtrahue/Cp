// onek somoi diye bhebe6i...aha
#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n ;
        cin>>n ;
        
        int j1=0,b1=0,j2,b2,res ;

        if(n%2==0){
            j2 = n/2 ;
            b2 = n/2 ;
        }
        if(n%2==1){
            j2=n/2 ;
            b2 = n/2 +1 ;
        }

        int a[n] ;
        for(int i=0;i<n;i++){
            cin>>a[i] ;
        }

        for(int i=0;i<n;i++){
            if((a[i])%2==0){
                j1++ ;
            }
            if((a[i])%2==1){
                b1++ ;
            }
        }
        res = min(j1,b2) + min(b1,j2) ;
    
        cout<<res<<endl ;

    }
}