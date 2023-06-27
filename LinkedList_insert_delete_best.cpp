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

void insertAfter(node *prev_node, int data){
    if (prev_node == NULL)
    {
        cout<<"The given previous node cannot be NULL";
        return;
    }
    node *inser = NULL ;
    inser = new node() ;

    inser -> value = data ;
    inser -> next = prev_node ->next ;
    prev_node -> next = inser ;
}

void push(node** head_ref, int new_data)
{
	node* new_node = new node();
	new_node->value = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void insertBeginng(node **head,int data){
    node *new_node = NULL ;
    new_node = new node() ;
    new_node -> value = data ;
    new_node ->next = *head  ;

    *head = new_node ;
}

void deletePos(node **head,int pos){
    if(*head ==NULL){
        cout<<"\nThe list is already empty"<<endl ;
        return ;
    }

    node *temp = *head ;
    node *prev = NULL ;
    int count = 1;

    if(temp != NULL && count == pos){ // delete the first node 
        *head = temp -> next ;
        delete temp ;
        return ;

    }
    else{
        while(temp != NULL && count != pos){
            prev = temp ;
            temp = temp ->next ;
            count++ ;
        }
        if(temp == NULL){
            cout<<"\nSize of the list is less than the given position"<<endl ;
            return ;
        }
        prev->next = temp -> next ;
        delete temp ;
    }
}
void deleteByValue(node **head,int n){
    node *temp = *head ;
    node *prev = NULL ;

    if(temp!=NULL && temp->value==n){
        *head = temp->next ;
        delete temp ;
        return ;
    }
    else{
        while(temp!=NULL && temp->value !=n){
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
        cout<<(head->value)<<"->";
        head = head->next ;
    }
    cout<<"NULL" ;
}


int main(){
    node *head = NULL ;
    bool cholbe = 1;

    while(cholbe){
        int choice, data ;
        cout<<"----------------\n1 for inserting at beggining\n2 for inserting at the end\n3 for deleting by position\n4 for deleting by value\n5 to display the list\n-1 to exit\n----------------\nEnter: " ;
        
        cin>>choice ;

        switch(choice){
            case -1:
                cholbe = 0;
                break ;
            case 1:
                cout<<"Enter a Value : " ;
                cin>>data ;
                insertBeginng(&head,data) ;
                break ;
            case 2:
                cout<<"Enter a Value : " ;
                cin>>data ;
                insertAtEnd(&head,data) ;
                break ;
            case 3:
                cout<<"Enter the position of the node you wanna delete : " ;
                cin>>data ;
                deletePos(&head,data) ;
                break ;
            case 4:
                cout<<"Enter the data you wanna delete : " ;
                cin>>data ;
                deleteByValue(&head,data) ;
                break ;
            case 5:
                printList(head) ;
                cout<<"\n" ;
                break ;
            default:
                cout<<"Invaild Input!\n" ;
                break ;  
        }
    }
}