#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        string s;
        cin>>n ;
        cin>>s ;

        int p=0,q=0 ;
        for(int i=0;i<n;i++){
            if(s[i]=='B' && s[i+1]=='W'){
                p++ ;
            }
            if(s[i]=='W' && s[i+1]=='B'){
                q++ ;
            }
        }
        cout<<max(p,q)<<endl ;
    }
}