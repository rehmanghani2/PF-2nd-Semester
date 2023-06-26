/*7.	Write a program to sum all numbers of an array and display the sum 
a.	Arr = [2,7,9,3,6]: Answer: 27  */
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
int sum_digits(int a[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=a[i];
	}
	return sum;
}
main()
{
	int size,sum;
	printf("Enter how many(size) values in Array:\n");
	scanf("%d",&size);
	int arr[size];
	printf("\nEnter values in Array:\n");
	input_array(arr,size);   // call
	printf("\nThe Array values are:\n");
	display_array(arr,size); // call
	sum=sum_digits(arr,size);
	printf("\nThe sum of values in Array is:\n%d",sum);
}