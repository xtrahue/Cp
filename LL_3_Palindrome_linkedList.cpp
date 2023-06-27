//using stack 
#include<bits/stdc++.h>

class ListNode {
    int data ;
    ListNode *next ;
}

bool palin(ListNode *head){//using stack space : O(n)
    stack<int>s ;

    ListNode *slow = head ;
    while(slow!=NULL ){
        int i = slow ->data ;
        s.push(i) ;
    }

    while(head!=NULL){
        int i = s.top() ;
        s.pop() ;

        if(head->data != i){
            return false ;
        }

        head = head -> next ;
    }

    return true ;
}


bool pallindrome(ListNode* head){ // in O(1) space ....uses floyd's cycle detection algorithm
    ListNode *slow = head ;
    ListNode *fast = head ;

    while(fast != NULL && fast->next!=NULL){
        slow = slow ->next ;
        fast = fast->next->next ;
    }

    ListNode *prev = NULL ;
    ListNode *por = slow ;

    while(slow!=NULL){
        por = slow ->next ;
        slow ->next = prev ;
        prev = slow ;
        slow = por ;
    }

    while(prev != NULL && head !=NULL){
        if(prev->val!=head ->val){
            return false ;
        }
    }
    return true ;    
}