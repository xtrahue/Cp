#include<iostream>
using namespace std ;

int main(){

    int n;
    cin>>n ;

    int N[n],A[n] ;
    for(int i=0;i<n; i++){
        cin>>N[i]>>A[i] ;
    }
    int result,i,j ;
    for(i=0; i<n; i++){
        for(j=1; j<400; j++){
            result = N[i] - j*j ;
            if(result<0){
                break ;
            }
        }
        cout<<(j-1)*A[i]<<endl ;
    }

    return 0;
}