#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin>>n ;
    array<int,n>a ;

    for(int i=0;i<n;i++){
        cin>>a.at(i) ;
    }

    for(int *i=a.begin();i!=a.end();i++){
        cout<<*i<<" " ;
    }
}