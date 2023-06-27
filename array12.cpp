#include<iostream>
using namespace std ;

int missingNum(int arr[],int n){
    int sum ;
    sum = (n+2)*(n+1) / 2 ;
    for(int i=0;i<n;i++){
        sum = sum -arr[i] ;
    }
    return sum ;
}

int main(){
    int n;
    cin>>n ;

    int arr[n] ;
    for(int i=0; i<n; i++){
        cin>>arr[i] ;
    }

    int Miss = missingNum(arr,n) ;
    cout<<"The missing number between 1 to n is : "<<Miss<<endl ;

    return 0;
}