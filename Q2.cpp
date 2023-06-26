/*2.	Write a program to create an array of 5 floats and display them */
#include <stdio.h>
void input_array(float a[],int size)   // FUNCTION DEFINITION
{
	for(int i=0;i<size;i++)
	{
		scanf("%f",&a[i]);
	}
}
void display_array(float a[],int size)  //FUNCTION definition
{
	for(int i=0;i<size;i++)
	{
		printf("%.2f ",a[i]);
	}
}
main()
{
	int size=5;
	float arr[size];
	printf("Enter values in Array:\n");
	input_array(arr,size);   // call
	printf("The Array values are:\n");
	display_array(arr,size); // call
}