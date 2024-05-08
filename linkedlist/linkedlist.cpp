#include<iostream>
#include<vector>
#include "linkedlist.h"

//Initializing head and tail to null pointer at start
LinkedList::LinkedList(){
	this->HEAD=nullptr;
	this->TAIL=nullptr;
}
LinkedList::~LinkedList(){
	this->FreeMemory();
}
//Check if the linkedlist is an empty linkedlist 
bool LinkedList::isEmpty(){
  return (this->HEAD==nullptr)&&(this->TAIL==nullptr);
}

void LinkedList::addToHead(int data){
    Node *temp=new Node(data,this->HEAD);//Instiate a node temp which will contain data provides and address of head as next 
    this->HEAD=temp;
    if(this->TAIL==nullptr){
	    this->TAIL=this->HEAD;//If tail is null it means there is only one value so make it equal to head 
    }
}

void LinkedList::addToTail(int data){
	if(this->isEmpty()){//if linkedlist is currently forming
		Node *temp = new Node(data,nullptr);//instiate a node with data provided and adress of null
		this->TAIL=temp;//point tail to that node
		this->HEAD=temp;//point head to that node too
	}
	else{//else if there exist a linkedlist already
		Node *temp= new Node(data,nullptr);//instiate a node with data provided and nullptr as next
		this->TAIL->next=temp;//point tail's next to that node
		this->TAIL=temp;//make tail point to that node
	}
}

bool LinkedList::removeFromHead(){
  	if (!this->isEmpty())
    	{
       		 Node *nodeToDelete = this->HEAD;//find a node to remove i.e head
       		 this->HEAD = nodeToDelete->next;//point head to the next node
		 delete nodeToDelete;//delete node
       		 return true;
         }  
        else 
         {
        	return false;
         }
}

bool LinkedList::removeFromTail(){
	if(this->isEmpty()){
		std::cout<<"Nothing is there";
		return false;
	}
	else{
		Node *prev=this->HEAD;//initialize previous element to head
		while(prev->next->next!=nullptr){//find secondlast element
			prev=prev->next;
		}
		delete prev->next;//delete address of last element from secondlast element and make it nullptr
		prev->next=nullptr;
		TAIL=prev;//point tail to secondlast
		return true;
	}

		return false;
}
void LinkedList::add(Node *previous,int data){
	if(this->isEmpty()){
		std::cout<<"Not possible";//if linkedlist is not there we can't insert after some node
	}
	else{
		Node *temp=new Node(data,previous->next);//initialize a new node with next of element after previous
		previous->next=temp;//set previous next pointer to the newly formed node
	}
}
void LinkedList::traverse(){
	if(this->isEmpty()){
		std::cout<<"Nothing to lookfor";//if there is no element we can traverse
	}
	Node *temp = HEAD;
	while(temp!=nullptr){
		std::cout<<temp->data<<' ';//print out element 
		temp=temp->next;
	}
	std::cout<<std::endl;
}
Node* LinkedList::searchsmt(int target){
	if(this->isEmpty()){
		std::cout<<"Nothing to searchfor";
	}
	Node *temp = HEAD;//initialize node to head
	while(temp!=nullptr){//iterate through the linked list until and unless we get lastelement that has adderess of nullptr
		if(temp->data==target){
			std::cout<<"Found at "<<temp<<std::endl;
		}
		temp=temp->next;
	}
	return temp; //return address of that node
}
bool LinkedList::remove(int target){
	if(this->isEmpty()){
		std::cout<<"Nothing to remove";
		return false;
	}
	else if(target==HEAD->data||target==TAIL->data){//if target is from head or tail suggest to use another method
		std::cout<<"User remove from head or tail";
		return false;	
	}
	else{

		Node *previous=HEAD;//set two node one form previous node and one for current node
		Node *current = HEAD->next;
		while(current!=nullptr){
			if(current->data==target){//iterate through until we find out target
				break;
			}
			previous=current;
			current=current->next;
		}
		if(current==nullptr){ //if we get out of bound the it suggets not found 
			std::cout<<"Not found";
			return false;
		}
		else{
			previous->next=current->next;
 			if (current == TAIL) {
                		TAIL = previous;
            		}
			delete current;
			return true;
		}
	}
	return false;
}
Node* LinkedList::getHead(){//getHead
	return this->HEAD;
}
Node* LinkedList::getTail(){//gettail
	return this->TAIL;
}
bool LinkedList::FreeMemory(){
	if(this->isEmpty()){
		return false;
	}
	std::vector<Node *> temparr;
	Node *temp=HEAD;
	while(temp!=nullptr){
		temparr.push_back(temp);
		temp=temp->next;
	}
	for(Node *e:temparr){
		delete e;
	}
	HEAD=nullptr;
	TAIL=nullptr;
	return true;
}
