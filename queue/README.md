# Introduction
Implementaion of Queue one of the datastructure in computer science.

# Output
```cpp
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

```
```bash
    4 3 5 5
```
