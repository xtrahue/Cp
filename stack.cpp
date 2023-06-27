#include<iostream>
using namespace std ;

#define MAX 1000 

class MyStack{
    public:
    int top ;

    int a[MAX] ;
    MyStack(){
        top =-1;
    }

    bool push(int x){
        if(top>=MAX-1){
            cout<<"Stack Overflaw" ;
            return false ;
        }
        else{
            a[++top] = x;
            cout<<x<<" Pushed into the stack\n" ;
            return true ;
        }
    }

    int pop(){
        if(top<0){
            cout<<"Stack Underflow" ;
            return 0;
        }
        else{
            int x=a[top--] ;
            return x;
        }
    }
    
    void peek(){
        if(top<0){
            cout<<"Stack is empty" ;
        }
        else{
            int x=a[top] ;
            cout<<x;
        }
    }

    bool isEmpty(){
        return top==-1 ;
    }
};

int main(){
    class MyStack s;
    int exit = 1;
    while(exit){
        int choice,value ;
        cout<<"----------------\n1 for push\n2 for pop\n3 to peek\n-1 to exit\n----------------\nEnter: " ;
        cin>>choice ;

        switch(choice){
            case -1:
                exit = 0;
                break ;
            case 1:
                cout<<"Enter a Value : " ;
                cin>>value ;
                s.push(value) ;
                break ;
            case 2:
                s.pop() ;
                break ;
            case 3:
                s.peek() ;
                cout<<"\n" ;
                break ;
            default:
                cout<<"Invaild Input!\n" ;
                break ;  
        }
         
    }

}