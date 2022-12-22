#define ERROR 0

class Node {
private:
	class Node* prev;
	int elem;
	class Node* next;

public:
	Node(int x, class Node* prv, class Node* nxt);
	Node(int x);
	Node();

friend class LinkedList;
};

class LinkedList {
	class Node* head;
	class Node* tail;
	int length;

public:
	LinkedList();
	~LinkedList();

	int operator [] (int indx);
	void addFront(int x);
	void addBack(int x);
	void removeFront();
	void removeBack();	
	void add(int x);
	void remove();
	int len();
	bool search(int x);
	int element(int indx);

	int returnFront();
	int returnBack();
	bool isEmpty();

	void print();
};

