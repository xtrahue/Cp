#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,m ;
        cin>>n>>m ;

        int p = max(n,m) ;
        int q = min(n,m) ;

        int y = p-q ;

        int odd = (y+1)/2 ;
        int even = y - odd ;

        cout<<(p-1)+(q-1)+odd+(even*2)<<endl ;
    }
}