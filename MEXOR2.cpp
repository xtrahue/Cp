#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int x;
        cin>>x;
        
        if(x==0){
            cout<<"1"<<endl;
        }
        else if(x==1 || x==2){
            cout<<"2"<<endl ;
        }
        else{
            int sum = 1;
            while(2*sum<=x){
                sum*=2 ;
            }
            if(sum==x){
                cout<<x<<endl ;
            }
            else if(x==(2*sum - 1)){
                cout<<x+1<<endl ;
            }
            else{
                cout<<sum<<endl; 
            }
        }
    }
}