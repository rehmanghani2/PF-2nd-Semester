/*14.	Write a program to ask user to enter 5 numbers in an array, and find the maximum occurrences of each number in array
a.	Arr = [2,7,9,3,2,6,9]: Answer: 2 = 2, 7 =1, 9= 2, …   */
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
void find_occurence(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		int occur=0;
		for(int j=0;j<size;j++)
		{
		if(a[i]==a[j])
		   occur++;
	    }
	    printf("%d occur %d times\n",a[i],occur);
	}	
}
main()
{
	int size;
	printf("Enter how many(size) values you want in Array:\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter values in Array:\n");
	input_array(arr,size);   // call
	printf("\nThe Array1 values are:\n");
	display_array(arr,size); // call
	printf("\nThe maximum occurence of numbers are:\n");
	find_occurence(arr,size);	
}