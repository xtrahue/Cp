#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"Input a character"<<endl;
    cin>>button;

    switch(button)
    {
        case 'a':
           cout<<"Hello"<<endl;
           break;

        case 'b':
           cout<<"Namste"<<endl;
           break;
        case 'c':
           cout<<"Hola"<<endl;
           break;
        
        case 'd':
            cout<<"Namaskar"<<endl;

        default:
            cout<< "I am still learning more"<<endl;
            break;



    }

    return 0;
}