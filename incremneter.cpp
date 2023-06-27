#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b,c;

    
    c=++a;
    b=a++;
    
    cout<<b<<endl;
    cout<<c<<endl;
 
 //a++ is 11 cause first we have increased value of a while doing ++a
 // if we just take a++ in this example than the value of a++ would have been 10

    return 0;
}