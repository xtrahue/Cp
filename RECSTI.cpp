#include<iostream>
#include<algorithm>
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

        sort(arr,arr+n) ;

        int pair=0,dis=0 ;

        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                pair++ ;
                i++ ;
            }
            else{
                dis++ ;
            }
        }
        int x = (abs(dis-pair)*2)%4 ;
        
        cout<<dis+x<<endl ;
    }

    return 0;
}