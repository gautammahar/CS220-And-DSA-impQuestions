/*
2. Write a program to solve a 4x4 Sudoku?
*/


// Author -Gautam Kumar Mahar
// Branch - CSE
// Roll n. - 2103114
// Date - 29 Oct 2022
// Here is Second Question

#include<stdio.h>         

#define SIZE 4                                                                                  
int notvalid(int board[SIZE][SIZE],int i,int j,int k){    
	int t,l;                     // Here is define two integrer t and l
	for(int t=0 ; t<SIZE ; t++)                         //here is using for loop to check 
		if(board[i][t]==k) return 0;
	for(int t=0 ; t<SIZE ; t++)
		if(board[t][j]==k) return 0;
	t=i/2*2;                                         
	l=j/2*2;
	
	if(board[t][l]==k) return 0;
	if(board[t+1][l]==k) return 0;
	if(board[t][l+1]==k) return 0;
	if(board[t+1][l+1]==k) return 0;
	
	return 1;
}
	
// printing the board in this function
void print_board(int board[SIZE][SIZE]){            
	for(int i=0 ; i<SIZE ; i++){
		for(int j=0 ; j<SIZE ; j++){
		 printf("%d",board[i][j]);
		 }
		 printf("\n");
	}
}

//now, solving the sudoku

int solve_sudoku(int board[SIZE][SIZE]){          
	int full=1,i,j,k,success=1;                 
	for(int i=0 ; i<SIZE ; i++){
		for(int j=0 ; j<SIZE ; j++){
			if(board[i][j]!=0) continue;             
			int full=0;
			for(int k =1 ; k<SIZE+1;k++){
				if(notvalid(board,i,j,k)){
					board[i][j]=k;
				solve_sudoku(board);
					if(success==1) return 1;
			board[i][j]=0; 
			}
		 }
	    }
	   }
// if we get valid sudoku then printing
	if(full==1){
	printf("\nSuccess!\n");
		print_board(board);             
		return 1;   
	}
	return 0;        
	
}
			
//from here we can take input of 4x4 ma
int main(){
int board[SIZE][SIZE]={{0,4,0,0},               
			{0,0,0,0},
			{0,0,3,0},
			{0,2,0,4}};
	solve_sudoku(board);
			
}
// Thank you 
