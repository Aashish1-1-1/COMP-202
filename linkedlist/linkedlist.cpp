#include<iostream>
#include "linkedlist.h"

//Initializing head and tail to null pointer at start
LinkedList::LinkedList(){
	this->HEAD=nullptr;
	this->TAIL=nullptr;
}
LinkedList::~LinkedList(){
}
//Check if the linkedlist is an empty linkedlist 
bool LinkedList::isEmpty(){
  return (this->HEAD==nullptr)&&(this->TAIL==nullptr);
}

void LinkedList::addToHead(int data){
    Node *temp=new Node(data,this->HEAD);
    this->HEAD=temp;
    if(this->TAIL==nullptr){
	    this->TAIL=this->HEAD;
    }
}

void LinkedList::addToTail(int data){
	if(this->isEmpty()){
		Node *temp = new Node(data,nullptr);
		this->TAIL=temp;
		this->HEAD=temp;
	}
	else{
	Node *temp= new Node(data,nullptr);
	this->TAIL->next=temp;
	this->TAIL=temp;
	}
}

bool LinkedList::removeFromHead(){
  	if (!this->isEmpty())
    	{
       		 Node *nodeToDelete = this->HEAD;
       		 //int data = nodeToDelete->data;
       		 this->HEAD = nodeToDelete->next;


       		 delete nodeToDelete;

       		 return true;
         }  
        else 
         {
        	return false;
         }
}

//bool Linkedlist::removeFromTail(){
	
//}
//void Linkedlist::add()
void LinkedList::random(){
	std::cout<<this->HEAD->data<<std::endl;
	std::cout<<this->TAIL->data<<std::endl;
}
void LinkedList::traverse(){
	if(this->isEmpty()){
		std::cout<<"Nothing to lookfor";
	}
	Node *temp = HEAD;
	while(temp!=nullptr){
		std::cout<<temp->data<<' ';
		temp=temp->next;
	}
	std::cout<<std::endl;
}
void LinkedList::searchsmt(int target){
	if(this->isEmpty()){
		std::cout<<"Nothing to searchfor";
	}
	Node *temp = HEAD;
	while(temp!=nullptr){
		if(temp->data==target){
			std::cout<<"Found at "<<temp;
		}
		temp=temp->next;
	}
}
bool LinkedList::remove(int target){
	if(this->isEmpty()){
		std::cout<<"Nothing to remove";
	}
	Node *temp = HEAD;
	while(temp!=nullptr){
		if(temp->data==target){
			Node *toremote = temp;
		}
		temp=temp->next;
	}
}
int main(){
	LinkedList l1;
	l1.addToTail(34);
	l1.addToHead(56);
	l1.addToHead(25);
	l1.addToTail(69);
	l1.traverse();
}

