/*
Question -
In today’s lab, you are being provided with a heap class object heap (refer code) where the
input (loaded in to the heapArray[] field in the heapClass) is guaranteed to be a max-heap
containing at least 10 elements. . Write functions that perform each of the following tasks (note
that indexing starts from 0).
Note:Download Question.cpp and input.txt (sample input) files to begin with.
1. int getLargest(class heapClass hp): Returns the largest element in the heap. Note that
your implementation is not supposed to have loops.
2. int getThirdLargest(class heapClass hp): Returns the third largest element in the
heap. Note that your implementation is not supposed to have loops.
3. int DeleteSecondLargest(class heapClass hp): Deletes the second largest element from
the heap, re-heapify if required and returns the element that replaces the aforementioned.
You may use void reduceHeapSize() function to reduce the size of the heap by 1 once
you are done with.
You may uncomment the appropriate statements in the main function to test your code.
*/

/* Name - Gautam Kumar Mahar 
   Roll.n. 2103114
   Branch - CSE
   Assignment - 6
*/

//including all header files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

class heapClass   // Creating class
{
	int*heapArray;
	int h_size;


	public:
	
	void reset()
	{
		heapArray=NULL;
		h_size=-1;
	}

	int getValueAtIndex(int index)
	{	
		return heapArray[index];
	}

	void initHeap(int*ptr,int size)
	{
		heapArray=ptr;
		h_size=size;		
	}


	void swap(int i,int j)
	{
		int temp=heapArray[i];
		heapArray[i]=heapArray[j];
		heapArray[j]=temp;
	}
	
	bool compare(int i,int j)
	{
		if(heapArray[i]<=heapArray[j])
			return 1;
		else
			return 0;
		
	}
	int getSize()
	{
		return h_size;
	}

	void reduceHeapSize()
	{
		h_size--;
	}
	void printHeap()
	{
		for(int j=0;j<h_size;j++)
		printf("%d ",heapArray[j]);
		printf("\n");
	}
	
};
class heapClass heap;
//Returns the largest element in the given max-heap 
int getLargest(class heapClass hp)
{
	/*The function shouldn't use loops*/
	return hp.getValueAtIndex(0);

}
//Returns the third largest  element in the given max-heap
int getThirdLargest(class heapClass hp)
{   // declare integers
	int a;
	int left;
	int right;
	int rm;
	if(hp.compare(1,2)){
		a = 1;
		left = 5;
		right= 6;
	}else {
		a = 2; left = 3; right= 4;
	}
	if(hp.compare(left,right)){    // Comparing left right values
		if(hp.compare(a,right)){
			return hp.getValueAtIndex(right);
		}
		else{               // we return in index(a)
			return hp.getValueAtIndex(a);
		}	
	} else {
		if(hp.compare(a,left)){
			return hp.getValueAtIndex(left);  // we return in index(left)
		} else{
			return hp.getValueAtIndex(a);
		}
	}
}
// The heapify function below ensures that the array stays as binary-max-heap
void heapify(class heapClass hp, int len, int i){
    int largest = i;  // declare largest is equal to i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<len && !hp.compare(left,largest)){  // Here is - if left is less than and seond condition true then we return largest value is equal to left value
        largest = left;
    } if(right<len && !hp.compare(right,largest)){
        largest = right;
    }if(largest!=i){
        hp.swap(largest,i);
        heapify(hp, len, largest);
    }
}
//Deletes the second largest element in the max-heap and replaces it with the appropriate element retaining the heap structure
int DeleteSecondLargest(class heapClass hp)
{  if(hp.compare(1,2)){                  // Here is we are comparing using if else condition
		hp.swap(2,hp.getSize()-1); heap.reduceHeapSize();
		heapify(hp, hp.getSize(), 2);
		return hp.getValueAtIndex(2);
	}else{
		hp.swap(1,hp.getSize()-1); heap.reduceHeapSize();
		heapify(hp, hp.getSize(), 1);
		return hp.getValueAtIndex(1);
	}
}

// Main Function
int main()
{
	FILE*fp1;
	int listSize,y;
	fp1=fopen("input.txt","r");//input is a max-heap
        fscanf(fp1,"%d",&listSize);
        int*tempList=(int*)calloc(listSize,sizeof(int));
	for(int j=0;j<listSize;j++){
		fscanf(fp1,"%d",&tempList[j]);		
	}
	heap.initHeap(tempList,listSize);

	fclose(fp1);
//	printf("\n The largest element is:%d\n",getLargest(heap));
//	printf("\n The third largest element is:%d\n",getThirdLargest(heap));
	printf("\nFINAL VALUE WHICH IS THE REPLACED THE SECOND LARGEST ELEMENT IN THE HEAP :%d \n",DeleteSecondLargest(heap));

	printf("\nFINAL HEAP : ");
	heap.printHeap();
	printf("%d",heap.getSize());
}
