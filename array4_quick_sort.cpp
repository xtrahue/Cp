#include<bits/stdc++.h>
using namespace std ;

void swap(int arr[],int i,int j){
   
    int temp = arr[i] ;
    arr[i] = arr[j] ;
    arr[j] = temp ;
}

int partition(int arr[],int l, int h){

    int i=l;
    int j=h ;
    int pivot=arr[l];

    while(i<j){
        while(arr[i]<=pivot){
            i++ ;
        }
        while(arr[j]>=pivot){
            j-- ;
        }
        if(i<j){
         swap(arr,i,j) ;
        }
    }
    swap(arr,j,l) ;
    return j ;
}

void quickSort(int arr[],int l, int h){
    if (l < h){

        int pi = partition(arr, l, h);
 
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, h);
    }

}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }

    quickSort(arr,0,n-1) ;
    printArray(arr,n) ;


    return 0;
}