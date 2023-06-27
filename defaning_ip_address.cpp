#include<iostream>
#include<string>
using namespace std ;

int main(){
    string ip;
    getline(cin,ip) ;

    string s2 ;

    int s = ip.size() ;

    for(int i=0; i<s ; i++){
        char ch = ip[i] ;
        if(ch =='.'){
            s2 += '['  ;
            s2 += ch ;
            s2 += ']' ;
        }
        else{
            s2 +=ch ;
        }
    }
    cout<<s2<<endl ;

    return 0;
}