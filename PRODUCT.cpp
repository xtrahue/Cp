#include<iostream>
using namespace std ;

int hcf(int x, int y) {
  if (y == 0)
    return x;
  return hcf(y, x%y);
}

int main(){
    int t;
    cin>>t ;

    while(t--){
        int b,c;
        cin>>b>>c ;

        int x = hcf(b,c) ;
        cout<<c/x<<endl ;
    }

    return 0;
}