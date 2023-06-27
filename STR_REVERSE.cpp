#include<iostream>
#include<string>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        string s;
        cin>>s ;

        int n=s.size() ;

        int count =0 ;

        int front =0,last = n-1 ;

        while(front<n){
            if(s[front]==s[last]) {
                last-- ;
            }
            else{
                count++ ;
            }
            front++ ;
            
        }

        cout<<count<<endl ;
    }

    return 0;
}