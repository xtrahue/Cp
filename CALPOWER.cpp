#include<iostream>
#include<algorithm>
using namespace std ;

int order(char x){
    return (x-96);
}

int main(){
    int t;
    cin>>t ;

    while(t--){
        string s;
        cin>>s;

        int j=s.length() ;
        int arr[j] ;
        for(int i=0;i<j;i++){
            arr[i]=order(s[i]) ;
        }

        sort(arr,arr+j) ;

        int p=0;

        for(int i=1;i<=j;i++){
            p=p+arr[i-1]*i ;
        }

        cout<<p<<endl ;
    }
}