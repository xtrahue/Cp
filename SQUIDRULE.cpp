#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;
        int arr[n] ;

        for(int i=0; i<n; i++){
            cin>>arr[i] ;
        }

        int sum=0;
        int min=0 ;

        for(int i=0;i<n;i++){
            sum+=arr[i] ;

            if(i==0){
                min=arr[i] ;
            }
            else if(arr[i]<min){
                min=arr[i] ;
            }
        }
        cout<<(sum-min)<<endl ;
    }
}