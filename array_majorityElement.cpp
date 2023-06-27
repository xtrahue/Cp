//Write a function which takes an array and prints the majority element (if it exists), 
//otherwise prints “No Majority Element”. 
//A majority element in an array A[] of size n is an element that appears more than n/2 times 
//(and hence there is at most one such element). 

#include<bits/stdc++.h>
using namespace std ;

void maxElement(int arr[],int n){
    int maxCount = 0;
    int index = -1 ;

    for(int i=0;i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++ ;
            }
        }

        if(count > maxCount){
            maxCount = count ;
            index = i ;   // index ta store kor6i karon arr[index] taai too cout korbo 
        }
    }

    if(maxCount > n/2){
        cout<<"Max Element is : "<<arr[index]<<endl  ;
    }

    else {
        cout<<"No max Element is there."<<endl ;
    }
}

int main(){
    int n;
    cin>>n ;

    int arr[n] ;
    for(int i=0; i<n; i++){
        cin>>arr[i] ;
    }

    maxElement(arr,n) ;

    return 0;
}