#include <iostream>
#include<new>
using namespace std ;


class node{
    public:
    int value ;
    node *next ;
};

void insertAtEnd(node **head, int  val){

    node *four = new node() ;
    node *last = *head ;
    four -> value = val ;
    four -> next = NULL ;

    if(*head == NULL){
        *head  = four ;
    }

    while(last -> next != NULL){
        last = last -> next ;
    }

    last->next = four ;
}

int main(){

    node *head  ;
    node *one = NULL ;
    /*node *two = NULL ;
    node *three = NULL ;
    
    one = new node() ;
    two = new node() ;
    three = new node() ;

    one->value = 1 ;
    two->value = 2 ;
    three -> value = 3 ;

    one->next = two ;
    two->next = three ;
    three -> next = NULL ;*/

    int n;
    cin>>n ;
    
    
    head = one ;
    insertAtEnd(&head,n) ;

    /*while(head!=NULL){
        cout<<head->value<<" " ;
        head = head->next ;
    }*/


}