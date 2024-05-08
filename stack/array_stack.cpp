#include <iostream>
#include "array_stack.h"

ArrayStack::ArrayStack(int max){
   this->max = max;
   this->arr = new int[max];
   this->topindex = -1;
}
ArrayStack::~ArrayStack(){
	delete [] arr;
}
bool ArrayStack::isEmpty(){
  if(topindex==0){
    return true;
  }
  return false;
}
void ArrayStack::push(int data){
  if(topindex!=max-1){
    this->topindex++;
    *(arr+topindex)=data;
  }
  else{
    std::cout<<"Stack overflow";
  }
}

int ArrayStack::pop(){
    if(topindex==0){
      std::cout<<"Nothing to pop";
      return -1;
    }
 return *(arr+topindex--);
}

int ArrayStack::top(){
  if(topindex==0){
    return -1;
  }
  return *(arr+topindex);

}

