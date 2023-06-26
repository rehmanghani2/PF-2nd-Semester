/* 9.	Find sum of all numbers on even indexes of the array. a.	Arr = [2,7,9,3,6]: Answer: 17 (1+9+6)   */
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
int sum_evenindex_nums(int a[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		if(i%2==0)
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
	sum=sum_evenindex_nums(arr,size);
	printf("\nThe sum of even index numbers in Array is:\n%d",sum);
	
}