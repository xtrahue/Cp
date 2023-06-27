#include<iostream>
using namespace std ;

#define MAX 1000

class Stack{
    int top ;
    public:
    int a[MAX] ;
    int count =0;//to count number of elements ;
    
    Stack(){
        top=-1 ;
    }

    void push(int n){
        if(top>=MAX-1){
            cout<<"Stack Overflow"<<endl ;
        }
        else{
            a[++top]= n;
            cout<<n<<" Pushed in the Stack"<<endl ;
            count++ ;
        }
    }
    void pop(){
        if(top<=-1){
            cout<<"Stack Underflow" ;
        }
        else{
            top=top-1 ;
        }
    }

    int peek(){
        if(top<=-1){
            return 0;
        }
        else{
            int x=a[top] ;
            return x;
        }
    }


};
int main(){
    class Stack s;
    
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