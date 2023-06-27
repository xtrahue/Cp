#include<iostream>
using namespace std;

void UniSection(int arr1[],int arr2[],int n,int m){
    int i=0;
    int j=0;

    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            cout<<arr1[i]<<" " ;
            i++ ;
        }
        if(arr2[j] < arr1[i]){
            cout<<arr2[j]<<" " ;
            j++ ;
        }
        if(arr1[i] == arr2[j]){
            cout<<arr2[j]<<"(Duplicate)"<<" " ;
            j++ ;
            i++ ;
        }
    }
    while(i<n){
        cout<<arr1[i]<<" ";
        i++ ;
    }
    while(j<m){
        cout<<arr2[j]<<" ";
        j++ ;
    }    
}



int main(){
    cout<<"Put the size of both the arrays: " ;
    int n,m;
    cin>>n>>m ;

    cout<<"Put the elements of the first array: " ;
    int arr1[n] ;
    for(int i=0; i<n; i++){
        cin>>arr1[i] ;
    }

    cout<<"Put the elements of the second array: " ;
    int arr2[m] ;
    for(int i=0; i<m ;i++){
        cin>>arr2[i] ;
    }

    UniSection(arr1,arr2,n,m) ;

    return 0;
}