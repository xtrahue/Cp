//dekhe solve kora
#include<iostream>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        string s ;
        cin>>s ;

        int l = s.length() ;
        int count = 0; 

        if(s[0]=='0'){
            count = 1 ;
        }
        for(int i=1; i<l; i++){
            if(s[i]!=s[i-1]){
                count++ ;
            }
        }
        cout<<(count)<<endl ;

    }
}