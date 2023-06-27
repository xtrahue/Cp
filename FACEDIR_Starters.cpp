#include<iostream>
using namespace std ;

int main(){
    int n ;
    cin>>n ;

    while(n--){
        int p;
        cin>>p;

        int d=p%4 ;

        if(d==0){
            cout<<"North"<<endl ;
        }
        else if(d==1){
            cout<<"East"<<endl ;
        }
        else if(d==2){
            cout<<"South"<<endl ;
        }
        else{
            cout<<"West"<<endl ;
        }
    }
}