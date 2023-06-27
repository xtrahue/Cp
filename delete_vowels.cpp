#include<iostream>
#include<string>
using namespace std ;

int main(){
    string str;
    getline(cin,str) ;
    int p = str.length() ;

    for(int i=0;i<p; i++){
        if(str[i] == 'a'||str[i] == 'e'|| str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U'){
            str.erase(str.begin() + i) ;
        }
    }
    cout<<str<<endl ;

    return 0;
}