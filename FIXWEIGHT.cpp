#include<iostream>
using namespace std;
 
int primeFactors(int n)
{   
    int store =0 ;
    int c=2;
    while(n>1)
    {
        if(n%c==0){
        store = c ;
        n/=c;
        }
        else c++;
    }
    return store ;
}
 

int main()
{   
    int t;
    cin>>t ;

    while(t--){
        int n , x;
        cin>>n>>x ;

        int ko = primeFactors(x) ;

        if(ko<=n){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
    }
    
    
    return 0;
}