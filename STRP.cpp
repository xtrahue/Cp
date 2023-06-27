#include<iostream>
#include<string>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        int count=0 ;

        string s;
        cin>>s ;

        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                i++ ;
                count++ ;
            }
        }

        cout<<n-count<<endl ;
    }
}