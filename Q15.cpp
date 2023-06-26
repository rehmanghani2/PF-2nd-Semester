/*15.	Write a program to reverse an array without using second array.
a.	Arr = [2,7,9,3,6]: Answer: [6, 3, 9, 7, 2]  */
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
void reverse_array(int a[],int size)
{
	int first=0;
	int last=size-1;
	while(first<last)
	{
	int hold=a[first];
	a[first]=a[last];
	a[last]=hold;	
	first++;
    last--;
	}
}
main()
{
	int size;
	printf("Enter how many(size) values you want in Array:\n");
	scanf("%d",&size);
	int arr1[size];
	printf("Enter values in Array:\n");
	input_array(arr1,size);   // call
	printf("\nThe Array values are:\n");
	display_array(arr1,size); // call
	printf("\nThe reverse of Array without using second array is:\n");
	reverse_array(arr1,size); // call
    display_array(arr1,size);
    	
}