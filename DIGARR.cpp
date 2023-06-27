#include<iostream>
using namespace std ;

bool ans(int n, string s){
    for(int i=0;i<n;i++){
        if(s[i]=='0' || s[i]=='5'){
            return 1 ;
        }
    }
    return 0;
}

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        string s;

        cin>>n ;
        cin>>s ;

        bool flag = ans(n,s) ;

        if(flag){
            cout<<"YES"<<endl ;
        }        
        else{
            cout<<"NO"<<endl ;
        }
    }
}