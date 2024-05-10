#include <iostream>
#include "linkedlist_queue.h"

int main(){
	LinkedListQueue q(6);
	q.enqueue(4);
	q.enqueue(3);
	q.enqueue(5);
	q.enqueue(7);
	std::cout<<q.dequeue();	
	std::cout<<q.dequeue();	
	std::cout<<q.front();	
	std::cout<<q.dequeue();	
	return 0;
}
