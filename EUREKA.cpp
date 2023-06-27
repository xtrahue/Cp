#include<iostream>
#include<cmath>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        float x = pow((0.143*n),n) ;

        float p = x - (int) x ;

        if(p<0.5){
            cout<<(int) x <<endl ;
        }
        else{
            cout<<(int)x + 1<<endl ;
        }
    }
}