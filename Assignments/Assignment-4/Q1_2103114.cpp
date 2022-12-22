/* Name - Gautam Kumar Mahar 
   Roll.n. 2103114
   Branch - CSE
   Assignment - 4 
   */

#include<stdio.h>          //Header files
class Node{  // I define a class for implement liked list
public:      // Publlic Clas
 int data;
	Node* next;
	Node(int dt){ // Constructor
		data = dt;
		next = NULL;  // null assign to next
	}
};
Node* head=NULL; // This is head pointer
// here is function for pop 
int pop(){
	Node* a = head;
	int dt = head->data;
	head = head->next;
	delete a;
	return dt;
}
// here is function for push
// This function adds a Node at the top of the Stack

void push(int dt){ // void functin
	Node* n = new Node(dt);
	if(head == NULL){   
		head = n;
	}
	else{    // else condition for , when head !=n 
		Node* temp = head;
		head = n;
		head->next = temp;
	}
}

int solve(char* s){ // This is main function of all the code this function takes postfix string and returns the solution .
	int i=0;
	while(s[i] != '\0'){ // using while loop for all the elements 
   if(s[i]=='-' || s[i]=='+' || s[i]=='*' || s[i]=='/'){
  int a = pop(); // Here is a and b are the variables & c stores the value gained after doing the operation.
  int b = pop();
  int c; 
  if(s[i]=='-'){              
  int c = b-a;
  push(c);	// here this solved value push back to stack
}else if(s[i]=='+'){      
int c = b+a;
push(c);	// here this solved value push back to stack
}else if(s[i]=='*'){
int c = b*a;
push(c);    // here this solved value push back to stack
}else if(s[i]=='/'){
int c = b/a;   // here this solved value push back to stack
push(c);	
}				
// final condition 
// int this condition ,If ith element of the string is a operand , it is also pushed back to stack		
}else{
  push(s[i]-'0');
		}
		i += 1;
	}
	return pop(); // This statement returns the value at the only node inside the stack.
	

}

	int main(){  // Main Function
	char s[100];  // here is char size 100
	scanf("%s",s);  // then we scan s and give output
	printf("%d\n",solve(s));
	return 0;

	
	
}
// Thanks !

