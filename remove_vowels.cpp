//doesn't work here..but works fine on other platforms
#include<iostream>
#include<string>
using namespace std ;

int main(){
    string str;
    getline(cin,str) ;
    int p = str.length() ;

    for(int i=0;i<p; i++){
        char ch = str[i] ;
        if(ch == 'a'||ch == 'e'|| ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U'){
            str.erase(str.begin() + i) ;
        }
    }
    cout<<str<<endl ;

    return 0;
}