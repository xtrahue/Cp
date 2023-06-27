#include<iostream>
using namespace std;

int decimalToBinary(int n){
    int j;
    while(n>=0){
         j= n%2;
         j += j*10 ;
         n/=10;
    }
    cout<<endl;
   

    int reversej=0;
    while(j>0){
        int lastdigit= j%10;
        
        reversej = reversej*10 + lastdigit;
       
        j=j/10;

    }
    cout<<endl;
    return reversej ;
}

int main(){

    int n;
    cin>>n;

    cout<<decimalToBinary(n)<<endl;


    return 0;
}