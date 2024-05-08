#include "stack.h"

class ArrayStack : public Stack{
  public:
    ArrayStack(int max);
    ~ArrayStack();

    void push(int item);
    int pop();
    int top();
    bool isEmpty();
  private:
      int *arr;
      int topindex;
      int max;
};
