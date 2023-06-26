/*6.	Write a program to assign 10 random numbers in an array and then ask user to enter a number to find whether that number exists in the array or not using functions. (search number in the array). Display index of the number of found else display -1.
a.	Arr = [2,7,9,3,6]: Input = 7. Answer: 1
b.	Input = 5: Answer = -1 */
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
int search_array(int a[],int size,int input)
{
	int index=-1;
	for(int i=0;i<size;i++)
	{
		if(a[i]==input)
	   index=i;	
	}
	return index;	
}
main()
{
	int size=10,index,input;
	int arr[size];
	printf("Enter any 10 random numbers in Array:\n");
	input_array(arr,size);   // call
	printf("\nThe Array values are:\n");
	display_array(arr,size); // call
	printf("\nEnter the number you want to search:\n");
	scanf("%d",&input);
	index=search_array(arr,size,input);
	if(index!=-1)
	printf("\nThe search number %d in Array is at index:\n%d",input,index);
    else
	printf("\n%d",index);
}