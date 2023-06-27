#include<iostream>
using namespace std ;

int res(int n,string s){
    int count =0 ;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            count=1;
            if(s[i+1]=='1'){
                return 2;
            }
        }
    }
    return count;
}

int main(){
    int t ;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        string s;
        getline(cin >> ws, s) ;

        int j=res(n,s) ;
        cout<<j<<endl ;          
    }
}