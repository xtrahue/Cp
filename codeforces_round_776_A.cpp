#include<iostream>
#include<string>
#include<vector>
using namespace std ;

int fun(vector<int>store, int x){
    for(int i=0;i<x;i++){
        if(store[i] & 1){
            return 1 ;
        }
    }
    return 0;
}

int main(){
    int t;
    cin>>t ;

    while(t--){
        string s1 ;
        char c0 ;

        vector<int>store ;
        int x =0 ;
        
        getline(cin >> ws, s1);
        cin>>c0 ;

        for(int i=0;i<s1.length();i++){
            if(s1[i] == c0){
                store.push_back(i+1) ;
                x++ ;
            }
        } 

        int result = fun(store,x) ;

        if(result==1){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
        
    }
    return 0;
}