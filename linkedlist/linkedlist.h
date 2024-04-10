class Node
{
    public:
        int data;
        Node *next;

        Node(){}
        Node(int d): data(d),next(nullptr) {}
        Node(int d,Node*next): data(d),next(next) {}
};

class LinkedList
{
    private:
        Node *HEAD;
        Node *TAIL;
    
    public:
        LinkedList();
        ~LinkedList();

        void add(Node *pred,int data);
        void addToHead(int data);
        void addToTail(int data);

        bool remove(int data);
        bool removeFromHead();
        bool removeFromTail();
        bool isEmpty();

};