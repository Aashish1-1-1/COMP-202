# Introduction
Implementaion of linkedlist one of the datastructure in computer science.

# Output
```cpp
    
int main(){
	LinkedList *l1=new LinkedList();
	l1->addToTail(34);
	l1->addToHead(56);
	l1->addToHead(25);
	l1->addToTail(69);
	l1->remove(56);
	l1->removeFromTail();
	l1->add(l1->getHead(),62);
	l1->add(l1->getHead(),79);
	l1->traverse();
	delete l1;//freeing memory used
}

```
```bash
    25 79 62 34 
```
