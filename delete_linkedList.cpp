#include<iostream>
using namespace std ;

class node{
    public:
    int data ;
    node *next ;
};

void push(node** head_ref, int new_data)
{
    node *last = *head_ref ;
    node* new_node = new node();
    new_node->data = new_data;
    new_node->next = NULL ;
    if(*head_ref==NULL){
        *head_ref = new_node ;
        return ;
    }
    while(last->next!=NULL){
        last=last->next ;
    }
    last->next = new_node ;
    return ;
}

void deleteList(node **head,int n){
    node *temp = *head ;
    node *prev = NULL ;

    if(temp!=NULL && temp->data==n){
        *head = temp->next ;
        delete temp ;
        return ;
    }
    else{
        while(temp!=NULL && temp->data !=n){
            prev = temp ;
            temp = temp->next ;
        }
        if(temp==NULL){
            return ;
        }
        prev->next = temp->next ;
        delete temp ;
    }
}

void printList(node *head){
    while(head!=NULL){
        cout<<(head->data)<<"->";
        head = head->next ;
    }
    cout<<"NULL" ;
}

int main(){
    node* head = NULL ;
    int exit = 1;
    while(exit){
        int choice,value ;
        cout<<"----------------\n1 for inserting\n2 for deleting\n3 to display the list\n-1 to exit\n----------------\nEnter: " ;
        cin>>choice ;

        switch(choice){
            case -1:
                exit = 0;
                break ;
            case 1:
                cout<<"Enter a Value : " ;
                cin>>value ;
                push(&head,value) ;
                break ;
            case 2:
                cout<<"Enter a Value : " ;
                cin>>value ;
                deleteList(&head,value) ;
                break ;
            case 3:
                printList(head) ;
                cout<<"\n" ;
                break ;
            default:
                cout<<"Invaild Input!\n" ;
                break ;  
        }
         
    }
}