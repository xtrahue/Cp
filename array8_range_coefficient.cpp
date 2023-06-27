#include<iostream>
#include<numeric>
using namespace std;

int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}
 

int getMax(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = max(res, arr[i]);
    return res;
}

int main(){
    int n ;
    cin>>n ;

    int arr[n] ;
    for(int i=0;i<n; i++){
        cin>>arr[i] ;
    }

    int mn = getMin(arr,n) ;
    int mx = getMax(arr,n) ;

    float range = (mx - mn) ;
    float plus = (mx+mn) ;
    
    float coefficient = range/plus ;

    cout<<"Range is: "<<range<<"\n" ;
    cout<<"Coefficient is: "<<coefficient ;

    return 0;
}