#include "linkedlist_queue.h"

bool LinkedListQueue::isEmpty(){
	return (this->l.isEmpty());
}
void LinkedListQueue::enqueue(int data){
	this->l.addToTail(data);
}
int LinkedListQueue::dequeue(){
	 int toreturn=this->l.getHead()->data;
	 this->l.removeFromHead();
	return toreturn;
}
int LinkedListQueue::front(){
	return (this->l.getHead()->data);
}
int LinkedListQueue::back(){
	return (this->l.getTail()->data);
}	
