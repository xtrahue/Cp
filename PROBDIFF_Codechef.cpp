#include<bits/stdc++.h>
using namespace std ;

int main(){

    int n;
    cin>>n ;

    int a1[n] , a2[n] , a3[n] ,a4[n] ;

    for(int i=0; i<n; i++){
        cin>>a1[i]>>a2[i]>>a3[i]>>a4[i] ;
    }

    for(int i=0;i<n; i++){
        if(a1[i] == a2[i] == a3[i] == a4[i]){
            cout<<"0"<<endl ;
        }
        else if (a1[i] == a2[i] == a3[i] || a2[i] == a3[i] == a4[i] || a1[i] == a2[i] == a4[i] || a1[i] == a3[i] == a4[i] ){
            cout<<"1"<<endl ;
        }
        else{
            cout<<"2"<<endl ;
        }
    }


    return 0;
}