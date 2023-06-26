/*3.	Write a program to ask user to enter 5 numbers in a array, and find the maximum value in array
a.	Arr = [2,7,9,3,6]: Answer: 9   */
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
main()
{
	int size=5,max;
	int arr[size];
	printf("Enter values in Array:\n");
	input_array(arr,size);   // call
	printf("\nThe Array values are:\n");
	display_array(arr,size); // call
	max=find_max(arr,size);
	printf("\nThe maximum value in Array is:\n%d",max);
}