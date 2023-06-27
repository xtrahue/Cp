#include<iostream>
using namespace std ;


int main(){
    int t ;
    cin>>t ;

    while(t--){
        int n,q;
        cin>>n>>q ;

        int arr[n] ;
        for(int i=0;i<n;i++){
            cin>>arr[i] ;
        }

        for(int i=0;i<q;i++){
            int p;
            cin>>p ;
            int b[n] ;
            
            for(int j=0;j<n;j++){
                b[j] = p^arr[j] ;
            }
            int c_odd=0, c_even=0 ;

            for(int i=0;i<n;i++){
                int j = __builtin_popcount(b[i]) ;
                if(j&1){
                    c_odd++ ;
                }
                else{
                    c_even++ ;
                }
            }
            cout<<c_even<<" "<<c_odd<<endl ;
        }


    }
    return 0;
}