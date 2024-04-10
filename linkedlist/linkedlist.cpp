#include<iostream>
#include "linkedlist.h"

//Initializing head and tail to null pointer at start
LinkedList::LinkedList(){
	HEAD=nullptr;
	TAIL=nullptr;
}
LinkedList::~LinkedList(){

}
//Check if the linkedlist is an empty linkedlist 
bool LinkedList::isEmpty(){
  return (this->HEAD==nullptr)&&(this->TAIL==nullptr);
}

void Linkedlist::addToHead(int data){
    Node temp;
    temp->data=data;
    temp->next=HEAD;
    HEAD=temp;
    if(TAIL==nullptr){
	    TAIL=HEAD;
    }
}

void Linkedlist::addToTail(int data){
	if(this->isEmpty()){
		Node temp;
		temp->data=data;
		temp->next=nullptr;
		HEAD=TAIL=temp;
	}
	Node temp;
	temp->data=data;
	temp->next=nullptr;
	TAIL->next=temp;
	TAIL=temp;
}
void Linkedlist::add()
int main(){
	LinkedList l1;
	l1.isEmpty();
}
