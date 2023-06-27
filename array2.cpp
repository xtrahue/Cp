#include<iostream>
using namespace std;

int getMin(int arr[],int n){
    
    int min=arr[0];

    for(int i=0; i<n; i++){
        
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
    
}
int getMax(int arr[],int n){
    
    int max=arr[0];

    for(int i=0; i<n; i++){
        
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
    
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i] ;
    }
    cout<<"Minimum Element: "<<getMin(arr,n)<<endl ;
    cout<<"Maximum Element: "<<getMax(arr,n)<<endl;


    return 0;
}