#include "queue.h"

class ArrayQueue : public Queue{
	public:
		ArrayQueue(int max);
		~ArrayQueue();
		
		 void enqueue(int data);
		 int dequeue();
		 bool isEmpty();
		 int front();
		 int back();
		 bool isFull();
	private:
		 int *arr;
		 int frontindex;
		 int backindex;
		 int maxsize;
};
