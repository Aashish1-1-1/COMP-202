#include<iostream>
#include "../../Aashish/Lab/linkedlist.h"



bool Linkedlist::isEmpty(){
    if(this->HEAD==NULL&&this->TAIL==NULL){
        return true;
    }
    return flase;
}

void Linkedlist::addToHead(int data){
    Node temp;
    temp->data=data;
    temp->next=HEAD;
}