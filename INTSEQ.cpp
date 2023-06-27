#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int k;
        cin>>k ;

        int h=k/2 , h2 = k-k/2;
        
        int a[k/2] , s[k/2] ;

        for(int i=0;i<k/2;i++){
            a[i] = h--;
            s[i] = h2++ ;
        }

        int p = 0 , count =0;
        for(int i=0 ; i<k/2 ; i++){
            if((s[i]==a[i]+p) || i==0){
                count++ ;
                p+=a[i] ;
            }
            
        }
        cout<<count<<endl ;
    }
}