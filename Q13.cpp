/* 13.	Find the total number of occurrences of each number in array */
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
		int count=1; // for current num
		int occur=0; // check if num has already been printed
		for(int j=0;j<i;j++)
		{
		if(a[j]==a[i])
		{
			occur=1;
		    break;
		}
	    }
	    if(!occur){
	    for(int j=i+1;j<size;j++)	 // count occurence of number
	    {
	    	if(a[j]==a[i])
	    	{
	    		count++; // for each match found
			}
		}
		printf("%d occur %d times\n",a[i],count);
        }  
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