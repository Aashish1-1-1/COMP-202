#include <iostream>
#include "array_queue.h"

ArrayQueue::ArrayQueue(int max){
	this->arr = new int[max];
	this->maxsize=max;
	this->frontindex=0;
	this->backindex=0;
}
ArrayQueue::~ArrayQueue(){
	delete [] arr;
}
bool ArrayQueue::isEmpty(){
	if(frontindex==backindex){
		return true;
	}
 return false;
}
bool ArrayQueue::isFull(){
	if(frontindex==(backindex+1)%this->maxsize){
		return true;
	}
	return false;
}
void ArrayQueue::enqueue(int data){
	if(this->isFull()){
		std::cout<<"Overflow";
	}
	else{
		*(arr+backindex)=data;
		backindex=(backindex+1)%this->maxsize;
	}
}
int ArrayQueue::dequeue(){
	if(this->isEmpty()){
		std::cout<<"Underflow";
		return -1;
	}
	int toreturn=*(arr+frontindex);
	frontindex=(frontindex+1)%this->maxsize;
	return toreturn;
}

int ArrayQueue::front(){
	return *(arr+frontindex);
}
int ArrayQueue::back(){
	return *(arr+backindex);
}
