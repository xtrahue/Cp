#include<iostream>
using namespace std ;

class node{
    public:
    int value ;
    node *next ;
};

void insertAtEnd(node **head, int  val){
    node *four = NULL ;
    node *last = *head ;

    four = new node() ;
    four -> value = val ;
    four -> next = NULL ;

    if(*head == NULL){
        *head = four ; 
        return ;
    }

    while(last -> next != NULL){
        last = last -> next ;
    }
    last -> next = four ;
    return ;
}
void insertAtStart(node **head,int n){
    node *new_node = new node() ;
    new_node -> value = n;
    new_node -> next = *head ;

    *head = new_node ;
}

void insertAfter(node *prev_node,int n){
    node *new_node ;
    new_node -> value = n;
    new_node -> next = prev_node -> next ;
    prev_node-> next =new_node ;
}

void printList(node *n){
    while(n!=NULL){
        cout<<n->value<<"->" ;
        n = n->next;
    }
}

int main(){
    node *head ;
    head = NULL ;
    int n;
    cin>>n ;

    insertAtEnd(&head,n) ;
    printList(head) ;
}