#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        string s;
        getline(cin>>ws,s) ;

        int code, chef,p=1,q=1 ;

     
            for(int i=0;i<n;i++){
                if(s[i]=='c'&& s[i+1]=='h' && s[i+2]=='e'&& s[i+3]=='f' && p){
                    chef = i ;
                    p=0 ;
                }
            }

    
       
            for(int i=0;i<n;i++){
                if(s[i]=='c'&& s[i+1]=='o' && s[i+2]=='d'&& s[i+3]=='e' && q){
                    code = i ;
                    q=0 ;
                }
            }
     
        if(code<chef){
            cout<<"AC"<<endl ;
        }
        else{
            cout<<"WA"<<endl ;
        }
    }
}