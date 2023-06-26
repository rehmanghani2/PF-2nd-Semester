/* 8.	Write a program to find sum of all odd numbers in the array.
a.	Arr = [2,7,9,3,6]: Answer: 19  */
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
int sum_odd_nums(int a[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		if(a[i]%2==1)
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
	printf("Enter values in Array:\n");
	input_array(arr,size);   // call
	printf("\nThe Array values are:\n");
	display_array(arr,size); // call
	printf("\nThe sum of Odd numbers in Array  is:\n");
	sum=sum_odd_nums(arr,size);
	if(sum!=0)
	printf("%d",sum);
	else
	printf("\nSorry,Odd numbers are not present in Array");
}