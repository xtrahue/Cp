#include<iostream>
#include<algorithm>
using namespace std ;

int main(){
    int n,d ;
    cin>>n>>d ;

    int a[n] ;
    for(int i=0;i<n;i++){
        cin>>a[i] ;
    }

    sort(a,a+n) ;
    
    int count = 0;

    for(int i=0;i<n;i++){
        if(a[i+1]-a[i]<=d){
            count++ ;
            i++ ;
        }
        else{
            continue ;
        }
    }
    cout<<count<<endl ;
}