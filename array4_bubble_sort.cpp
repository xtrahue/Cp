#include<bits/stdc++.h>
using namespace std;

void swaping(int arr[], int i,int j){
    int temp = arr[i];
    arr[i] = arr[j] ;
    arr[j] = temp ;
}

void bubbleSort(int arr[],int n){
    for(int i=0; i< n; i++){
        bool swapped = false;
        for(int j=0;j< n-j; j++){
            
            if(arr[j]>arr[j+1]){
                swapped = true ;
                swaping(arr,j,j+1);
            }
        }
        if(!swapped){
            break ;
        }
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

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }

    bubbleSort(arr,n);

    printArray(arr,n);

    return 0;
}