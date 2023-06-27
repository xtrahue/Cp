#include<iostream>//code isnot working for 0 1 2 0 1 2
using namespace std;

void swap(int arr[], int i,int j){
    int temp = arr[i];
    arr[i] = arr[j] ;
    arr[j] = temp ;
}

void separate012(int arr[],int n){
    int low=0 ;
    int mid = 0;
    int high = n-1 ;

    while(mid<=high){
        
        if(arr[mid] == 0){
            swap(arr,low,mid) ;
            mid++ ;
            low++ ;
        }
        if(arr[mid]==1){
            mid++ ;
        }
        if(arr[mid]==2){
            swap(arr,high,mid) ;
            high-- ;
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

    separate012(arr,n) ;

    printArray(arr,n) ;


}