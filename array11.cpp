#include<bits/stdc++.h>
using namespace std ;

void swap(int arr[], int i, int j){
    int temp = arr[i] ;
    arr[i] = arr[j] ;
    arr[j] = temp ;
}

int main(){
    int n;
    cin>>n ;

    int arr[n] ;

    for(int i=0;i<n; i++){
        cin>>arr[i] ;
    }
    
    int x=0 ;
    while(x<(n-x-1)){
        swap(arr,x,n-x-1) ;
        x++ ;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" " ;
    }



    return 0;
}