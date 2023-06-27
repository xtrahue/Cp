#include<bits/stdc++.h>
using namespace std ;

int frequency(int arr[],int n,int key){
    int count =0;

    for(int i=0; i<n; i++){
        if(key==arr[i]){
            count++ ;
        }
    }
    return count ;
}

int main(){
    int n,key;
    cout<<"Give the no of elements in the array: ";
    cin>>n;
 
    int arr[n] ;
    cout<<"Put the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
    cout<<"Give the key element: ";
    cin>>key;

    cout<<key<<" is present "<<frequency(arr,n,key)<<" times in the array"<<endl ;

    return 0;
}