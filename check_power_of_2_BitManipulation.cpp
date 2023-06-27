#include<iostream>
using namespace std ;

int main(){
    int n;
    cin>>n ;

    int p=n-(n&(-n)) ;

    if(p==0){
        cout<<"true ";
    }
    else{
        cout<<"false" ;
    }
}