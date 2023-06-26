/*16.	Write a program to insert all the numbers in sorted order is array.   */
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
void sorted_array_ascending(int a[],int size)
{
	for(int pass=1;pass<size;pass++)
	{
	for(int i=0;i<size-1;i++)
	{
		if(a[i]>a[i+1])
		{
		int hold=a[i];
		a[i]=a[i+1];
		a[i+1]=hold;
	    }
	}
    }
}
void sorted_array_descending(int a[],int size)
{
	for(int pass=1;pass<size;pass++)
	{
	for(int i=0;i<size-1;i++)
	{
		if(a[i]<a[i+1])
		{
		int hold=a[i];
		a[i]=a[i+1];
		a[i+1]=hold;
	    }
	}
    }
}
main()
{
	int size;
	printf("Enter size of Array:\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter values in Array:\n");
	input_array(arr,size);   // call
	printf("\nThe Array values are:\n");
	display_array(arr,size); // call
	printf("\n\nThe Array is sorted\n");
	printf("\nThe sorted Array in ascending order is:\n");
	sorted_array_ascending(arr,size);  // call
	display_array(arr,size); // call
	printf("\nThe sorted Array in descending order is:\n");
	sorted_array_descending(arr,size);  // call
	display_array(arr,size); // call
}