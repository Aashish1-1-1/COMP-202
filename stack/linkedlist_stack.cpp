#include <iostream>
#include "linkedlist_stack.h"

LinkedListStack::LinkedListStack(){
}
LinkedListStack::~LinkedListStack(){
}


void LinkedListStack::push(int item){
    l.addToHead(item);
}

int LinkedListStack::pop(){
   int temp=this->l.getHead()->data;
   this->l.removeFromHead();
   return temp;
}

int LinkedListStack::top(){
  return this->l.getHead()->data;
}

bool LinkedListStack::isEmpty(){
  return this->l.isEmpty();
}

