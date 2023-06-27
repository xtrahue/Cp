#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,x,y ;
        cin>>n>>x>>y ;

        int c_bus=0, c_car=0 ,z ;

        while(n>=100){
            if(x<=25*y){
                c_bus = n/100 ;
            }
            else{
                c_car=(n/100) *25 ;
            }
            n=n%100 ;
        }
        float p = (float) n/ 4 ;
        if(p==(int)p){
            z=(int) p ;
        }
        else{
            z=(int)p+1 ;
        }

        if(z*y>=x){
            cout<<((c_bus+1)*x)+(c_car*y)<<endl ;
        }
        else{
            cout<<(c_bus*x) +((c_car+z)*y)<<endl ;
        }
    }

    
    return 0;
}