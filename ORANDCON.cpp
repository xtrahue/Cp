#include<iostream>
#include<cmath>
using namespace std ;

unsigned countBits(unsigned int number)
{   
    return (int)log2(number)+1;
}

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        unsigned b = countBits(n) ;

        int bi = pow(2,b-1) ;

        if(bi==n){
            int tri = n*2 ;
            cout<<n<<" "<<n+1<<" "<<tri<<endl ;
        }
        else{
            cout<<n-bi<<" "<<bi<<" "<<n<<endl ; 
        }
    }
}