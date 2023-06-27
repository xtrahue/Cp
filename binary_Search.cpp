#include<iostream>
using namespace std ;

int binarySearch(int arr[],int n, int key){
    int l=0;    //low
    int h=n;   //high
    int mid=(l+h)/2 ;
    while(l<=h){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            l=mid+1 ;
        }
        else{
            h=mid-1 ;
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n ;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
    
    int key;
    cin>>key ;
    cout<<binarySearch(arr,n,key)<<endl;

    return 0;
}