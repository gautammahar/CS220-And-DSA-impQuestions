#include<stdio.h>
#include<stdlib.h>
#include<string.h>

class heapClass
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

}

//Returns the third largest  element in the given max-heap
int getThirdLargest(class heapClass hp)
{
	/*The function shouldn't use loops*/
}

//Deletes the second largest element in the max-heap and replaces it with the appropriate element retaining the heap structure
int DeleteSecondLargest(class heapClass hp)
{
	/*Write your function body here*/
}


int main()
{
	FILE*fp1;
	int listSize;
	fp1=fopen("input.txt","r");//input is a max-heap

	fscanf(fp1,"%d",&listSize);

	int*tempList=(int*)calloc(listSize,sizeof(int));
	for(int j=0;j<listSize;j++)
	{
		fscanf(fp1,"%d",&tempList[j]);		
	}
	heap.initHeap(tempList,listSize);

	fclose(fp1);

/*
	printf("\n The largest element is:%d\n",getLargest(heap));
*/

/*
	printf("\n The third largest element is:%d\n",getThirdLargest(heap));
*/
/*
	printf("\n The value that replaced the second largest in the final heap is:%d\n",DeleteSecondLargest(heap));
*/


	printf("\n The final heap is:");
	heap.printHeap(); 
}

