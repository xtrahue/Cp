#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,m,k,sum1=0,sum2=0 ;
        cin>>n>>m>>k ;
        int a[n] ;
        for(int i=0;i<n;i++){
            cin>>a[i] ;
        }

        for(int i=0;i<m;i++){
            sum1+=a[i] ;
            sum2+=a[i] ;           
        }
        for(int i=m;i<n;i++){
            sum1+=a[i] ;          
        }
        if(sum1==n){
            cout<<"100"<<endl ;
        }
        else if(sum2==m){
            cout<<k<<endl ;
        }
        else{
            cout<<"0"<<endl ;
        }

    }
    return 0;
}