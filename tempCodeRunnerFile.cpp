void printList(node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next ;
    }
    cout<<"NULL" ;
}