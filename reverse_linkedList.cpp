#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

/*void reverse_List(node **head){
    node *d=NULL ;  //dummy node
    node *por = *head ;
    node *current = *head ;

    while(current!=NULL){
        por = current->next ;
        current->next = d ;
        d=current ;
        current=por ;
    }
    *head = d ;
}*/

node *reverse_List(node *head)
{ // recursion...returns head
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *rest = reverse_List(head->next);
    head->next->next = head;

    head->next = NULL;

    return rest;
}

/*void reverse_List(node **head){    //itreation method
    node *prev = NULL ;
    node *current = *head ;
    node *por = *head ;

    while(current!=NULL){
        por = current ->next ;
        current-> next = prev ;
        prev = current ;
        current = por ;
    }
    *head = prev ;
}*/

void printList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

void push(node **head_ref, int new_data)
{
    node *last = *head_ref;
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

int main()
{
    node *head = NULL;
    int exit = 1;
    while (exit)
    {
        int choice, value;
        cout << "----------------\n1 for inserting\n2 for reverseing\n3 to display the list\n-1 to exit\n----------------\nEnter: ";
        cin >> choice;

        switch (choice)
        {
        case -1:
            exit = 0;
            break;
        case 1:
            cout << "Enter a Value : ";
            cin >> value;
            push(&head, value);
            break;
        case 2:
            head = reverse_List(head);
            cout << "\n";
            break;
        case 3:
            printList(head);
            cout << "\n";
            break;
        default:
            cout << "Invaild Input!\n";
            break;
        }
    }
}