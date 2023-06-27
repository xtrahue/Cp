#include<iostream>
using namespace std ;

void swap(int arr[], int i,int j){
    int temp = arr[i];
    arr[i] = arr[j] ;
    arr[j] = temp ;
}

void separateNP(int arr[],int n){
    int i =0 ;
    int j=0 ;
    int k= n-1 ;
    while(j<=k){
        if(arr[j]<0){
            swap(arr,i,j) ;
            i++;
            j++ ;
        }
        if(arr[j]>0){
            swap(arr,j,k) ;
            k-- ;
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
    cin>>n ;

    int arr[n] ;
    for(int i=0; i<n; i++){
        cin>>arr[i] ;
    }

    separateNP(arr,n) ;

    printArray(arr,n) ;


    return 0;
}