#include<iostream>
using namespace std ;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int countODD(int arr[],int n){
    int count=0 ;
    for(int i=0;i<n;i++){
        if(a[i]&1){
            count++ ;
        }
    }
    return count ;
}

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n ;
        cin>>n ;

        int a[n] ;
        for(int i=0;i<n;i++){
            cin>>a[i] ;
        }

        int x = findGCD(arr,n) ;

        if(x>1){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" " ;
            }
            cout<<endl ;
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i])
            }
        }
    }
}