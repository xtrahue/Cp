#include<iostream>
using namespace std;

int main(){
    int a,b,i,n;

    cout<<"From"<<endl;
    cin>>a;

    cout<<"To"<<endl;
    cin>>b;

    for(i=a;i<=b;i++){
        for(n=2;n<i;n++){
            if(i%n==0){
                
                break;
            }
            
        }
        if(i==n){
                cout<<i<<endl;
            }
    }
    //Solved by me.....yay!
    return 0;
}