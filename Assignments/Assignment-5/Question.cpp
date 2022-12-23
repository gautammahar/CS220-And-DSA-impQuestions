#include<stdio.h>
#include<stdlib.h>
#include<string.h>

class list
{
	int*list;
	int l_size;

	public:

	void reset()
	{
		list=NULL;
		l_size=-1;
	}


	void initList(int*ptr,int size)
	{
		list=ptr;
		l_size=size;		
	}


	void swap(int i,int j)
	{
		int temp=list[i];
		list[i]=list[j];
		list[j]=temp;
	}
	
	bool compare(int i,int j)
	{
		if(list[i]<=list[j])
			return 1;
		else
			return 0;
		
	}

	int getSize()
	{
		return l_size;
	}

	
	void printList()
	{
		for(int j=0;j<l_size;j++)
		printf("%d ",list[j]);
		printf("\n");
	}
	
}list1;


int getIndexOfSecondLargest(class list lst)//returns the index of the second largest element in the list lst
{
/*Write your code here*/

}



bool isSorted(class list lst)//returns true (1) if the list is sorted and false (0) otherwise
{
/*Write your code here*/

}

int quickFix(class  list lst,int i)//places the ith element in lst in an appropriate place j (as in quick sort) and rearranges the elements such that all the elements in the list to the left of lst[j] are less than  lst[j] and all the elements to the right are greater than  lst[j]. Further, the function returns the index j at which the element gets placed. Each element in the list can participate in at most two swaps.
{
/*Write your code here*/

}


int findkSmallestIndexPartiallySorted(class list lst,int k)//returns the index of the kth smallest element in the list. The input list is of even size and guaranteed to have first half of the list and the second half independently sorted. Your function is not supposed to modify the list 	
{
/*Write your code here*/

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

/*
	printf("\n The second largest element is at location:%d\n",getIndexOfSecondLargest(list1));
*/

/*
	if(isSorted(list1))
	{
		printf(\n The Input List is sorted\n);
	}
	else
	{
		printf(\n The Input List is not sorted\n);
	}
*/

/*
	quickFix(list1,14);
*/

/*
	printf("\n The %d th smallest is at location %d \n",k,findkSmallestIndexPartiallySorted(list1,9);
*/
}

