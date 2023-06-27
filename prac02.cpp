#include<iostream>
#include<algorithm>
using namespace std;

int mex(int n,int arr[]){
    sort(arr,arr+n) ;
    
    for(int i=0;i<n;i++){
        if(arr[i]!=i){
            return i;
        }
    }
    return -1;
} 

int main()
{   
    int t;
    cin>>t ;

    int arr[3]={1,2,3} ;

    cout<<mex(3,arr) ;
    
    return 0;
}