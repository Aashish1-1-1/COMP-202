#include "queue.h"
#include "../linkedlist/linkedlist.h"
class LinkedListQueue : public Queue{
	public:
		LinkedListQueue(int max){};
		~LinkedListQueue(){};
		
		 void enqueue(int data);
		 int dequeue();
		 bool isEmpty();
		 int front();
		 int back();
	private:
		 LinkedList l;
};
