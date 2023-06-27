#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std ;

int yes(int a[],int q){
    int &min = *min_element(a,a+q );
    for(int i=0;i<q;i++){
        if(a[i]>min+1){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,min;
        cin>>n ;

        int q = pow(2,n);
        int a[q] ;
        for(int i=0;i<q;i++){
            cin>>a[i] ;
        }

        bool p=yes(a,q) ;
        if(p){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }

    }
    
}
