#include "queue.h"

class ArrayQueue : public Queue{
	public:
		ArrayQueue();
		~ArrayQueue();
		
		void enqueue();
		 int dequeue();
		 bool isEmpty();
		 bool isFull();
		 int front();
		 int back();
	private:
		 int *arr;
		 int front;
		 int back;
		 int max;
}
