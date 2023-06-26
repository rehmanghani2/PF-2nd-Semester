/* 1.	Write a program to create a simple array of 5 numbers and display the array. */
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
main()
{
	int size=5;
	int arr[size];
	printf("Enter values in Array:\n");
	input_array(arr,size);   // call
	printf("The Array values are:\n");
	display_array(arr,size); // call
}