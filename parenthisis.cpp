#include<iostream>
#include<stack>
using namespace std ;

bool parenthesis(string str){
    int j=str.length() ;
    stack<char>s ;
    if(j&1){
        return 0;
    }
    else{
        for(int i=0;i<j;i++){
            if(str[i]=='(' || '{' || '['){
                s.push(str[i]) ;
            }
            else{
                if(str[i]==s.top()){
                    s.pop();
                }
                else{
                    return 0;
                }
            }
        }
        return 1;
    }
    
}

int main(){
    string s;
    cin>>s ;
    
    if(parenthesis(s) ){
        cout<<"YES" ;
    }
    else{
        cout<<"NO" ;
    }

    return 0 ; 
}