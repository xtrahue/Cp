#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        string s;
        cin>>s ;

        int count=1 ;

        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                continue ;
            }
            else{
                count++ ;
            }
        }
        cout<<count<<endl ;
    }
}