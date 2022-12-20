
/*	Author- Gautam Kumar Mahar 
	Roll - 2103114 
	Department - CSE 
	Assignment - 2
    Date - 28-09-2022
*/			
	
//adding header files
#include <stdio.h> 
#include <stdlib.h>

/* Function to find length of a given string */
int length(char* str){

	int count=0;    // Initializing counter for elements
	int index = 0;  // Initializing index of elements
	
	//while loop begin
	while(str[index] != '\0'){ // loop stops when \0 is detected at the string end
		
		count+=1; // Incrementing counter for element at every iteration
		index+=1; // Incrementing index of element at every iteration
	}
	//while loop end
	
	return count;	// returns count after loop ends to get length of string
}

/* Function to concatenate reverse of two strings */
char* revconcat(char* str1, char* str2){

	
	int i,j;					//Initializing loop indices
	int conlength = length(str1) + length(str2) + 1;	//Total length of concatenated string includeing '/0'
	
	char *arr;					//Creating a pointer 
	arr = (char *)malloc(sizeof(char)*conlength); //allocating memory, memory size = length of concatenated string
	
	//for loop begin
	for(i=0; i<length(str1); i++){
		arr[i]=str1[length(str1)-1-i];  //reversing the first string and assigning it to new string at every iteration
	}
	//for loop end
	
	//for loop begin
	for(j=0; j<length(str2); j++){
		arr[j+length(str1)]=str2[length(str2)-1-j]; //reversing the second string and assigning it to new string at every iteration
	}
	//for loop end
	
	arr[conlength-1]= '\0'; //assigning the last element of the string as '\0'
	
	return arr; //returning the string as a pointer
	
}

/* Funcion to return character at an index of reverse concatenated string returned from function above */
char retchar(char* str1, char* str2, int index){
	
	char indchar = revconcat(str1, str2)[index]; // calling the  function above and grabbing the character at the index 
	
	return indchar; 			       // returning the character at index
	
}

/* main function begin*/
int main(){
	
	//Initializing inputs
	char str1[100];
	char str2[100];
	int idx;

	
	//prompting the user and taking string1 as input
	printf("Enter string1: ");
	scanf("%s",str1);
	
	//prompting the user and taking string2 as input
	printf("Enter string2: ");
	scanf("%s",str2);
	
	//prompting the user and taking index as input
	printf("Enter index to be printed ");
	scanf("%d", &idx);
	
	//calling and storing the reversed and concatenated string
	char *revstr = revconcat(str1, str2);
	
	//calling and storing the character at index in the reversed and concatenated string
	char retcr = retchar(str1, str2, idx);
	
	
	//printing the reversed and concatenated string
	printf("Reverse concatenated string is %s \n", revstr);
	
	//printing the charcter at the index
	printf("The character at index %d is %c", idx, retcr);
	
	//freeing the memory we allocated earlier
	free(revstr);
}

// Thanks .



















