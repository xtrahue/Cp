#include<bits/stdc++.h>
using namespace std;

void swaping(int arr[], int i, int j){
    
    int temp = arr[i] ;
    arr[i] = arr[j];
    arr[j] = temp;

}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1; i++){
        
        int min = i;
       
        for(int j=i+1; j<n ; j++){
            if(arr[j]<arr[min]){
                j=min ;
            }
             swaping(arr,min,i) ;
        }
       
       
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl ;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }

    selectionSort(arr,n) ;

    cout<<"Sorted Array: ";
    printArray(arr,n) ;

    return 0;
}