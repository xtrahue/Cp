#include<bits/stdc++.h>
using namespace std ;

int main(){

    int n;
    cin>>n ;

    int s1[n],s2[n],s3[n] ;
    for(int i=0;i<n;i++){
        cin>>s1[i]>>s2[i]>>s3[i] ;
    }
    for(int i=0; i<n; i++){
        if(s3[i]<s2[i] && s3[i]<s1[i]){
            cout<<"Alice"<<endl ;
        }
        else if(s2[i]<s3[i] && s2[i]< s1[i]){
            cout<<"Bob"<<endl ;
        }
        else{
            cout<<"Draw"<<endl ;
        }
    }

    return 0;
}