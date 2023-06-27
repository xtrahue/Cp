#include<bits/stdc++.h>
using namespace std ;

int main(){
    int  n ;
    cin>>n ;

    int N[n] ,K[n], S[n],sum,q,j ;
    for(int i=0;i<n;i++){
        cin>>N[i]>>K[i]>>S[i] ;
    }

    for(j=0;j<n;j++){
        sum = S[j] - (N[j])*(N[j]) ;
    
        for(int k=1;k<=N[j]; k++){
            int odd2 = 2*k - 1;
            int p = (sum/odd2) ;
            if(p==K[j]-1){
                q=odd2  ;
            }
        }
        cout<<q<<endl ;
    }
    return 0 ;
}