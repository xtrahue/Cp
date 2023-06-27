#include<bits/stdc++.h>
using namespace std ;

void insertionSort(int arr[],int n){
    for(int i=1; i<n; i++){
        
        int temp = arr[i] ;
        int j=i-1;

        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j] ; //will not work if you write arr[j] = arr[j+1]
            j-- ;
        }
        arr[j+1] = temp ;
    }
}

void printArray(int arr[],int n){
    for(int i=0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;

    int arr[n] ;
    for(int i =0; i<n; i++){
        cin>>arr[i] ;
    }

    insertionSort(arr,n) ;
             
    printArray(arr,n) ;


    return 0;
}