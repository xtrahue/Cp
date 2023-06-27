#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;
    
    while(t--){
        int n;
        cin>>n ;
        
        for(int i=1;i<=n;i++){
            if(i==n){
                cout<<"1"<<endl ;
            }
            else{
                cout<<i+1<<" ";
            }
        }
    }
}