#include<bits\stdc++.h>
using namespace std;

int binarySearch(int arr[],int l,int h,int key){
    if(h<l){
        return -1;
    }
    
    int mid =(h-l)+l/2 ;

    if(arr[mid]==key){
        return mid ;
    }
    if(arr[mid]>key){
        return binarySearch(arr,l,mid-1,key) ;
    }
    else{
        return binarySearch(arr,mid+1,h,key);
    }

}

int Occurance(int arr[],int n,int key){
    int ind = binarySearch(arr,0,n-1,key) ;
    if(ind == -1){
        return 0;
    }
    
    int count =1;
    int left = ind -1 ;
    while(arr[left]==key && left>=0){
        count++ ;
        left-- ;
    }

    int right = ind+1 ;
    while(arr[right]==key && right<n){
        count++ ;
        right++ ;
    }

    return count ;
}

int main(){
    int n,key;
    cout<<"Give the no of elements in the array: ";
    cin>>n;
 
    int arr[n] ;
    cout<<"Put the sorted array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
    cout<<"Give the key element: ";
    cin>>key;

    cout<<key<<" is present "<<Occurance(arr,n,key)<<" times in the array"<<endl ;

    return 0;
}