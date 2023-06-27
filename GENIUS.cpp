#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,x;
        cin>>n>>x ;

        int rem = x%3 ;

        if(rem==0){
            cout<<"YES"<<endl ;
            cout<<(x/3)<<" 0 "<<(n-x/3)<<endl ;
        }
        else{
            int k = n*3-x ;
            int count_b = 0, count_c=0 ;

            while(k>=3){
                if(k%3==0){
                    count_c=k/3 ;
                    k=k%3 ;
                }
                else{
                    k=k-4 ;
                    count_b++ ;
                }
            }

            
            int a =(n-count_b-count_c) ;
            
            if(k==0){
                cout<<"YES"<<endl ;
                cout<<a<<" "<<count_b<<" "<<count_c<<endl ;
            }
            else{
                cout<<"NO"<<endl ;
            }
            
        }
    }
}