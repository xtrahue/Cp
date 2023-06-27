#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin>>n ;

    int reverse = 0;
    for(int i=0;i<32;i++){
        if(n & (1<<i)){
            reverse |= (1<<(31-i)) ;
        }
    }
    cout<<reverse<<endl ;
}