#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxNo = arr[0] ; // can also write maxNo = INT_MIN (INT_MIN is the least possible number )
    int minNo = arr[0] ; // similarly minNo= INT_MAX

    for(int i=1; i<n ;i++){
        maxNo = max(maxNo , arr[i]);
        minNo = min(minNo,arr[i]);

    }
    cout<<maxNo<<"  "<<minNo<<endl ;



    return 0;
}
