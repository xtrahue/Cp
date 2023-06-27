#include<iostream>
using namespace std;

int main(){
    float n1,n2;
    cout<<"Put two values"<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Put the operator"<<endl;
    cin>>op;

    switch(op){

        case '+':
           cout<< n1 + n2 <<endl;
           break;

        case '-':
            cout<< n1 - n2 <<endl;
            break;

        case '*':
            cout<< n1 * n2 <<endl;
            break;

        case '/':
            cout<< n1 / n2 <<endl;
            break;

        default:
            cout<< "Invalid!"<<endl;
            break;



    }


    return 0;
}