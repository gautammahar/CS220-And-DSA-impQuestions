/*
Question
In today’s lab, you are being provided with a segment of code that reads an integer list (all
values are distinct) from the file and creates a class object list1 which contains the array of
integers (check the class definition). Write functions that perform each of the following tasks.
Note: None of those functions below have direct access to the list. You may have
to use the swap() and compare() functions appropriately
1. int getIndexOfSecondLargest(class list lst): Returns the index of the second largest
element in the list.
2. bool isSorted(class list lst): Returns true (1) if the list is sorted and false (0) otherwise
3. int quickFix(class list lst,int i): Places the ith element in lst in an appropriate place j (as
in quick sort) and rearranges the elements such that all the elements in the list to the left
of lst[j] are less than lst[j] and all the elements to the right are greater than lst[j]. Further,
the function returns the index j at which the element gets placed. Each element in the list
can participate in at most two swaps.
4. int findkSmallestIndexPartiallySorted(class list lst,int k): Returns the index of the
k
th smallest element in the list. The input list is of even size and guaranteed to have first
half of the list and the second half independently sorted. Your function is not supposed to
modify the list (You may assume k to be less than n).
You may uncomment the appropriate statements in the main function to test your code.
*/

/*
   Name - Gautam Kumar Mahar 
   Branch - CSE
   Roll.n. 2103114 
   Assignment - 5
   Date - 16 Nov 2022
*/

//Including the header files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//The given data sturcture and its functions
class list{
	int*list;
	int l_size;
public:

	void reset(){
		list=NULL;
		l_size=-1;
	}


	void initList(int*ptr,int size){
		list=ptr;
		l_size=size;		
	}


	void swap(int i,int j){
		int temp=list[i];
		list[i]=list[j];
		list[j]=temp;
	}
	
	bool compare(int i,int j){
		if(list[i]<=list[j])
			return 1;
		else
			return 0;
		
	}

	int getSize(){
		return l_size;
	}

	
	void printList(){
		for(int j=0;j<l_size;j++)
		printf("%d ",list[j]);
		printf("\n");
	}
	
}list1;


int getIndexOfSecondLargest(class list lst)//returns the index of the second largest element in the list lst
{
/*Write your code here*/
	int len = lst.getSize(); //gets the size of the list
	int i=0;
	for(int j=1; j<len; j++){ //Itering from index 1 to the last index in the list
		if(!lst.compare(j,i)){ 	// if lst[j]>lst[i], i=j
			i=j;
		}
	}
	// At this point, i stores the index of maximum element
	int k=0;
	for(int j=1; j<len; j++){ //Itering from index 1 to the last index in the list
		if(!lst.compare(j,k) && !lst.compare(i,j)){ //if lst[j]>lst[k] and lst[i]>lst[j], then, k=j
			k=j;
		}
	}
	//At this point, k stores the index of second largest element
	return k;
}



bool isSorted(class list lst)//returns true (1) if the list is sorted and false (0) otherwise
{
/*Write your code here*/
	int len = lst.getSize(); //gets the size of the list
	bool ans = true; // This will store the answer
	for(int i=1; i<len; i++){
		if(!lst.compare(i,i+1)){ // if lst[i]>lst[i+1], ans = false
			ans = false;
			break; // Even one order is incorrect, the array is not sorted.
		}
	}
	return ans;
}

int quickFix(class  list lst,int i)//places the ith element in lst in an appropriate place j (as in quick sort) and rearranges the elements such that all the elements in the list to the left of lst[j] are less than  lst[j] and all the elements to the right are greater than  lst[j]. Further, the function returns the index j at which the element gets placed. Each element in the list can participate in at most two swaps.
{
/*Write your code here*/
//The indexing starts from 0
	int len = lst.getSize(); //gets the size of the list
	int j = 0,k = len-1;
	while(j<k){
		while(lst.compare(j,i)){j++;}//iterates till it finds lst[j]>lst[i]
		while(!lst.compare(k,i)){k--;}//iterates till it finds lst[k]<=lst[i]
		if(j<k){lst.swap(j,k);}//swaps lst[j] and lst[k]
	}
	lst.swap(k,i);
	return k;
}


int findkSmallestIndexPartiallySorted(class list lst,int k)//returns the index of the kth smallest element in the list. The input list is of even size and guaranteed to have first half of the list and the second half independently sorted. Your function is not supposed to modify the list 	
{
/*Write your code here*/
	int len = lst.getSize(); //gets the size of the list
	len/=2; // This is the lenght of both the sublists
	int i=0, j=len; // i is the 1st index of 1st list and j is 1st index of 2nd list.
	int ans;
	bool a = false; // this will be used if 1st list is overloaded
	bool b = false; // this will be used if 2nd list is overloaded
	for(int l=0; l<k-1; l++){// iterates till we find k-1 th smallest element
		if(lst.compare(i,j)){ // if lst[i]<=lst[j]
			if(i == len-1){a = true; break;}//1st least overloaded
			i+=1;
		}
		else{
			if(k == 2*len-1){b = true; break;}//2nd list overloaded
			j+=1;
		}
	}
	if(a){
		return k;
	}
	if(b){
		return 2*len-k-1;
	}
	if(lst.compare(i,j)){
		return i;
	}
	return j;
}



int main()
{
	FILE*fp1;
	int listSize;
	fp1=fopen("input1.txt","r");//arbitrary input
//	fp1=fopen("input2.txt","r");//sorted list to test isSorted
//	fp1=fopen("input3.txt","r");//both halfs are sorted to test findkSmallestIndexPartiallySorted()

	fscanf(fp1,"%d",&listSize);

	int*tempList=(int*)calloc(listSize,sizeof(int));
	for(int j=0;j<listSize;j++)
	{
		fscanf(fp1,"%d",&tempList[j]);		
	}
	list1.initList(tempList,listSize);

	fclose(fp1);
//	list1.printList();


	printf("\n The second largest element is at location:%d\n",getIndexOfSecondLargest(list1));


/*
	if(isSorted(list1))
	{
		printf("The Input List is sorted");
	}
	else
	{
		printf("The Input List is not sorted");
	}
*/


//	quickFix(list1,14); 
//	list1.printList();

//	printf("The %d th smallest is at location %d",9,findkSmallestIndexPartiallySorted(list1,9)); //As the indexing starts from 0, the answer for this is 20

}
