#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b ;

        int mx=0,mn=0,count=0 ;

        if(a>b){
            mx = a;
            mn = b ;
        }
        else if(a<b){
            mx = b ;
            mn=a ;
        }

        if((mx-mn)==1){
            if(mx+1<=n ){
                count++ ;
            }
            if(mn-1>0){
                count++ ;
            }

        }
        else if(mx-mn==2){
            count++ ;
        }

        cout<<count<<endl ;

    }

    return 0;
}