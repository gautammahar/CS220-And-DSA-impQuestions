#include<stdio.h>
#include"list.h"

Node::Node(int x, class Node* prv, class Node* nxt) {elem = x; prev = prv; next = nxt;}
Node::Node(int x) {elem = x; prev = NULL; next = NULL;}
Node::Node() {prev = NULL; next=NULL;}




bool LinkedList::isEmpty() {
	return (head == NULL);
}


LinkedList::LinkedList() {
	head = NULL;
	tail = NULL;
}

LinkedList::~LinkedList() {
	while (head != NULL) removeFront();
}


void LinkedList::addFront(int x) {
	if (head == NULL) {
		head = new Node(x,NULL,NULL);
		tail = head;
	}
	else {
		head = new Node(x,NULL,head);
		head->next->prev = head;
	}
}


int LinkedList::removeFront() {
	if (head == NULL) return ERROR;

	int tempelem = head->elem;

	class Node* temp = head;
	head = head->next;
	if (head == NULL) tail = NULL;
	else head->prev = NULL;
	delete temp;

	return tempelem;	
}












