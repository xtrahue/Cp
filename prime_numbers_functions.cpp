#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for(int i=2;i<sqrt(num);i++ ){
        if(num%i == 0){
            return false;   //if it is flase...then the loop will break automatically...no need to write "break"
        }
    }
    return true;  
}

int main(){
     
        int a,b;
        cin>>a>>b;

        for(int i=a;i<=b;i++){
            if( isPrime(i)){
                cout<<i<<endl;
            }
        }


    return 0;
}