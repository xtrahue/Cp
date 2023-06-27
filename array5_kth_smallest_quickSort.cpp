#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int i,int j){
    int temp =arr[i] ;
    arr[i]=arr[j] ;
    arr[j] = temp ;
}

int partition(int arr[],int l,int h){
    int i=l;
    int j=h ;
    int pivot= arr[l] ;

    while(i<h){
        while(arr[i]<=pivot){
            i++ ;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr,i,j) ;
        }
    }
    swap(arr,j,l);
    return j;
}

int kth_quickSort(int arr[],int l,int h,int k){
    if(l<h){
        int pi= partition(arr,l,h) ;
        
        if(arr[pi]== arr[k-1]){
            return arr[pi] ;
        }
        
        if(arr[pi]<arr[k-1]){
            kth_quickSort(arr,pi+1,h,k);
        }
        else{
            kth_quickSort(arr,l,pi-1,k) ;
        }
    }
    return -1;
}

int main(){

    int n,k;
    cout<<"Put the Number of elements in the array: " ;
    cin>>n ;
    
    int arr[n] ;
    cout<<"\nPut the elements of the array:  ";
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }

    cout<<"put which smallest element you want to find: " ;
    cin>>k ;

    cout<<"\nThe "<<k<<"th smallest element is: " ;
    kth_quickSort(arr,0,n-1,k);


    return 0;
}