/* 11.	Find the common numbers in two arrays.
a.	Arr1 = [2,7,9,3,6]: Arr2 = [3,5,7,9,10]. Answer: 3, 7, 9  */
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
void common_nums(int a[],int b[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		if(a[i]==b[j])
		printf("%d ",a[i]);
	    }
	}	
}
main()
{
	int size;
	printf("Enter how many(size) values you want in Array1 and Array2:\n");
	scanf("%d",&size);
	int arr1[size],arr2[size];
	printf("Enter values in Array1:\n");
	input_array(arr1,size);   // call
	printf("Enter values in Array2:\n");
	input_array(arr2,size);   // call
	printf("\nThe Array1 values are:\n");
	display_array(arr1,size); // call
	printf("\nThe Array2 values are:\n");
	display_array(arr2,size); // call
	printf("\nThe common numbers between Array1 and Array2 are:\n");
	common_nums(arr1,arr2,size);
	
}