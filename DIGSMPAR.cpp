#include<iostream>
#include<sstream>  
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int k;
        cin>>k ;

        stringstream ss;  
        ss<<k;  
        string s;  
        ss>>s;  

        int count = 0 ;
        int n = s.length() ;

        for(int i=n-1;s[i]=='9';i--){
            count++ ;
        }


        if(count&1){
            cout<<k+2<<endl ;
        }
        else{
            cout<<k+1<<endl ;
        }
    }
}