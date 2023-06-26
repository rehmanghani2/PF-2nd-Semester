/*4.	Write a program to ask user to enter 5 numbers in an array, and find the second largest value in array
a.	Arr = [2,7,9,3,6]: Answer: 7 */
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
	int first_max=a[0];
	int second_max;
	if(a[1]<first_max)
	second_max=a[1];
	else
	second_max=first_max;
	for(int i=2;i<size;i++)
	{
		if(a[i]>first_max)
		{
		second_max=first_max;
		first_max=a[i];
     	}
     	else if(a[i]>second_max)
     	{
     	second_max=a[i];	
		 }
    }	
	return second_max; 
}
main()
{
	int size,max;
	printf("Enter how many(size) values you want in Array:\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter values in Array:\n");
	input_array(arr,size);   // call
	printf("\nThe Array values are:\n");
	display_array(arr,size); // call
	max=find_max(arr,size);
	printf("\nThe second largest value in Array is:\n%d",max);
}