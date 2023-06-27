#include<iostream>

using namespace std ;

class node{
    int value ;
    node *next ;
} ;

void reverse_List(node **head){
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
}