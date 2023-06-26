/*12.	Find the numbers that are different in two arrays 
a.	Arr1 = [2,7,9,3,6]: Arr2 = [3,5,7,9,10]. Answer: 2, 6   */
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
void different_nums(int a[],int b[],int size)
{
	int different_value[size];
	int count=0;
	for(int i=0;i<size;i++)
	{
		int found=0;
		for(int j=0;j<size;j++)
		{
		if(a[i]==b[j])
		{
	      found=1;
	      break;
	    }
	     }
	     if(!found)
	     {
	     different_value[count++]=a[i];	
		 }    
	 }	
	 for(int i=0;i<count;i++)
	 {
	 	printf("%d ",different_value[i]);
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
	printf("\nThe different numbers between Array1 and Array2 are:\n");
	different_nums(arr1,arr2,size); // call
	
}