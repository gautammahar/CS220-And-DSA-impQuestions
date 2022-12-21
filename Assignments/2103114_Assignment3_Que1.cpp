/*

1. Write a program for the following questions on linked lists.
a. Create a linked list to store unlimited number of integers. There has to be a function to add
integers to the list.
b. Write a function to find the middle element in the linked list.
c. Write a function to print all elements in the linked list.
The LinkedList ADT should look like this.
class LinkedList {
private:
// Whatever you want as private.
public:
void add(int x);
int middle();
void print();
};

*/

// Author -Gautam Kumar Mahar
// Branch - CSE
// Roll n. - 2103114
// Date - 29 Oct 2022
// Here is First Question

#include<stdio.h>  // Here including the header files

//implement the linked list(In class)
class Node{
public:
	int data;
	Node* next;
	Node(int dt){
		data = dt;
		next = NULL;   
	}
};

class LinkedList {  // Now, it's create a new head for linked list 
private:
	Node* head=NULL;
public:                      // contains all the functions to be used( in the linked list)
	void add(int x);
	int middle();
	void print();
};


void LinkedList::add(int x){   //This function adds a node with integer data 'x' inside the linked list.
	Node* n = new Node(x); 
	if(head == NULL){ 
		head = n;  //this is for- if linked empty 
		
	}
	else{ //The last Node of the linked list points to null. make it point to n.
		Node* temp= head;
		while(temp->next!=NULL){ //This is used to find last element of the linked list.
			temp = temp->next;
		}
		temp->next = n;
	}
}

//This is middle function. 
//This finds the middle element of the linked list.
int LinkedList::middle(){
	Node* temp1 = head; 
	Node* temp2 = head; 
	while(temp2->next != NULL && temp2->next->next != NULL){
		temp1 = temp1->next;
		temp2 = temp2->next->next;
	}
	// linked list has odd number of elements.
	if(temp2->next == NULL){ 
		return temp1->data;
	}
	// linked list has even numver of elements.
	else{ 
		return temp1->next->data;
	}
}


void LinkedList::print(){    //here is print function. This prints all the elements of the linked list.
	Node* temp = head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

// int main(){

// 	LinkedList ll;
// 	ll.add(23);
// 	ll.add(36);
// 	ll.add(75);
// 	ll.add(67);
// 	ll.add(43);
// 	ll.add(9);
// 	ll.print();
// 	printf("%d\n",ll.middle());
// }
