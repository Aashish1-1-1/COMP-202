#include "stack.h"
#include "../linkedlist/linkedlist.h"

class LinkedListStack : public Stack{
  public:
    LinkedListStack();
    ~LinkedListStack();

    void push(int item);
    int pop();
    int top();
    bool isEmpty();
  
  private:
      LinkedList l;
};
