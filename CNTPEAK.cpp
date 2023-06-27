#include<iostream>
#include<cmath>
#include <sstream>  
#include <string> 
#include<string.h>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int j=0,count=0 ;
        int n;
        cin>>n ;
        if(n==1 || n==0){
            cout<<"0"<<endl ;
        }
        else{
            for(int i=0;i<n;i++){
                j+=2*pow(10,n) ;
            }
            for(int i=1;i<=j;i++){
                ostringstream str1;
                str1<<i ;

                string s = str1.str();
                
                for(int i=0;i<s.length();i++){
                    if((s[i]>s[i-1] && s[i]>s[i+1]) || (s[i]<s[i-1] && s[i]<s[i+1])){
                        count++ ;
                    }
                }
            }
            cout<<count<<endl ;
        }
            
    }
}