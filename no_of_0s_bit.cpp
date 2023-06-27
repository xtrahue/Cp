#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin>>n ;

    int a = log2(n) ;
    for(int i=0;i<=a;i++){
        int j= n & (1<<i) ;
        if(j){
            cout<<i ;
            break ;
        }
    }
}