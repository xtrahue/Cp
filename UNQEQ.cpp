#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin>>t ;
    

    while(t--){
        int n;
        cin>>n ;

        if((n/2) & 1){
            cout<<"NO"<<endl ;
        }
        else{
            cout<<"YES"<<endl ;
            int a[n/2],b[n/2],j=0,k=0 ;
            for(int i=1;i<=n;i++){
                if(i<=n/4 || i>(3*n)/4){
                    a[j] = i ;
                    j++ ;
                }
                
                else{
                    b[k] = i ;
                    k++ ;
                }
            }
            for(int i=0;i<n/2;i++){
                printf("%d ",a[i]);
            }
            cout<<endl ;
            for(int i=0;i<n/2;i++){
                printf("%d ",b[i]);
            }
            cout<<endl ;
        }
    }
}