#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        int arr[n] ;
        for(int i=0;i<n;i++){
            cin>>arr[i] ;
        }

        int add=0 ;
        int max = arr[0] ;

        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max = arr[i] ;
            }
            add+=arr[i] ;
        }

        float m1 = (float) (add-max) / (float) (n-1) ;
        printf("%f",m1+(float)max) ;

        cout<<endl ;
    }

    return 0;
}