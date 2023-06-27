#include<iostream>
using namespace std ;

int prof(string s,int n){
    for(int i=0;i<n;i++){
        if((s[i]=='L' && s[i+1]=='L') || (s[i]=='R' && s[i+1]=='R')){
            return 1;
        }
    }
    return 0;
}

int main(){
    int t;
    cin>>t ;

    

    while(t--){
        int n;
        cin>>n ;
        string s;
        cin>>s ;

        int j=prof(s,n) ;

        if(j){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }        
    }
}