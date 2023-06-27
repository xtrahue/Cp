#include<iostream>
using namespace std ;

class Queue{
    public:

        int rear,front ; 

        int *arr ;
        int size ;   
    
        Queue(int n){
            front=rear=-1 ;

            size = n ;
            arr = new int[size] ;
        }

        void enQueue(int value){
            if(front==-1  && rear==-1){
                front=rear=0 ;
                arr[rear] = value ;
            }
            else if((rear+1) % size == front){
                cout<<"Queue is already full. " ;
            }
            else{
                rear=(rear+1 ) % size ;
                arr[rear]=value ;
            }
        }

        void deQueue(){
            if(front==-1 || rear==-1){
                cout<<"Queue is Already Empty. "<<endl ;
            }
            else{
                cout<<"Dequeued element: "<<arr[front]<<endl ;
                front = (front+1)% size ;
            }
        }
        
        void displayQueue(){
            if(front == -1){
                cout<<"Empty Queue."<<endl ;
            }
            else if(rear>=front){
                for(int i=front ; i<=rear ;i++){
                    cout<<arr[i]<<" " ;
                }
                cout<<endl ;
            }
            else{
                for(int i=front;i<size;i++){
                    cout<<arr[i]<<" " ;
                }
                for(int i=0;i<=rear;i++){
                    cout<<arr[i]<<" "; 
                }
                cout<<endl ;
            }
        }
};

int main(){
    Queue q(5);
 
    // Inserting elements in Circular Queue
    q.enQueue(14);
    q.enQueue(22);
    q.enQueue(13);
    q.enQueue(-6);
 
    // Display elements present in Circular Queue
    q.displayQueue();
 
    q.deQueue() ;
    q.deQueue() ;
 
    q.displayQueue();
 
    q.enQueue(9);
    q.enQueue(20);
    q.enQueue(5);
 
    q.displayQueue();
 
    q.enQueue(20);
    return 0;
}