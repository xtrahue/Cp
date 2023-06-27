#include<iostream>
#include<string>
using namespace std ;

int main(){
    int p;
    cin>>p ;

    int n,a,b ;
    string s;

    while(p--){
        cin>>n>>a>>b ;
        getline(cin>>ws,s) ;
        
        int fare=0 ;

        for(int i=0; i<n;i++){
            if(s[i]=='0'){
                fare+=a ;
            }
            else{
                fare+=b ;
            }
        }
        cout<<fare<<endl ;
    }
    return 0;     
}