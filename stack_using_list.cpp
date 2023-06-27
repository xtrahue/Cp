#include<iostream>
using namespace std ;

class node{
    public:
    int data ;
    node *next ;
};

class LStack{
    public:
    node *top ;
    int size ;

    LStack(){
        top = NULL ;
        size = 0;
    }

    void push(int n){
        node *new_node = new node() ;
        new_node -> data = n ;
        new_node ->next = top ;
        size++ ;
        top = new_node ;
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow" ;
        }
        else{
            int p=top->data ;
            top = top->next ;
            size-- ;
        }
    }

    int peek(){
        if(top==NULL){
            cout<<"\nStack Underflow" ;
            return 0;
        }
        else{
            return (top->data) ;
        }
    }
} ;


int main(){
    class LStack s;
    int exit =1 ;
    while(exit){
        int condition ;
        cout<<"-----------------\n1 to push\n2 to Pop\n3 to Peek\n4 to print all the the elements\n-1 to exit\n-----------------\n" ;
        cin>>condition ;
        switch(condition){
            case -1:
                exit=0;
                break ;

            case 1:
                int n;
                cout<<"Enter Element : ";
                cin>>n ;
                s.push(n) ;
                break ;

            case 2:
                s.pop() ;
                break ;

            case 3:
                cout<<s.peek()<<endl;
                break ;

            //to print the whole stack;
            case 4:
                while(s.peek()){
                    cout<<s.peek()<<" " ;
                    s.pop() ;
                }
                cout<<endl ;
                break ;
        
        }
    }

    return 0;
}