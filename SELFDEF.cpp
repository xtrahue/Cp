#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,count=0;
        cin>>n ;

        int a[n] ;

        for(int i=0;i<n;i++){
            cin>>a[i] ;
        }
        for(int i=0;i<n;i++){
            if(a[i]>=10 && a[i]<=60){
                count++ ;
            }
        }
        cout<<count<<endl ;
    }
}