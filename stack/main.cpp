#include<iostream>
//#include "linkedlist_stack.h"
#include "array_stack.h"

int main () {
  ArrayStack s1(6);
  s1.push(34);
  s1.push(45);
  s1.push(4);
  s1.push(5);
  s1.push(6);
  std::cout<<s1.pop();
  std::cout<<s1.pop();
  std::cout<<s1.isEmpty();
  return 0;
}
