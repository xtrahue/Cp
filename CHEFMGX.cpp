#include<iostream>
using namespace std ;

bool isPrime(int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;

    if (n % 2 == 0 || n % 3 == 0)
        return 0;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
  
    return 1;
}

int main(){
    int t;
    cin>>t ;

    while(t--){
        int x,y,p=0 ;
        cin>>x>>y ;

        for(int q=x;q<y;q++){
            p++ ;
            int z=isPrime(q+2) ;
            if(z){
                q++ ;
            }
        }
        cout<<p<<endl ;
    }
}