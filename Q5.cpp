/*5.	Write a program to ask user to enter 5 numbers in a array, and find the index of maximum value in array
a.	Arr = [2,7,9,3,6]: Answer: 2 (9 exist on index 2)  */
#include <stdio.h>
void input_array(int a[],int size)   // FUNCTION DEFINITION
{
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display_array(int a[],int size)  //FUNCTION definition
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}
int find_max(int a[],int size)
{
	int max=a[0];
	for(int i=0;i<size;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
int find_maxindex(int a[],int size)
{
	int index=0;
	int max=a[0];
	for(int i=0;i<size;i++)
	{
		if(a[i]>max)
		index=i;
	}
	return index;
}
main()
{
	int size=5,max,index;
	int arr[size];
	printf("Enter values in Array:\n");
	input_array(arr,size);   // call
	printf("\nThe Array values are:\n");
	display_array(arr,size); // call
	max=find_max(arr,size);
	printf("\nThe maximum value in Array is:\n%d",max);
	index=find_maxindex(arr,size);
	printf("\nThe maximum value of Array exist in index:\n%d(%d exist on index %d)",index,max,index);
}