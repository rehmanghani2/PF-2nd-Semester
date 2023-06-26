/*10.	Ask user to enter an array of 10 numbers and find whether the array is palindrome or not. Palindrome is an array which is
 same whether it is read from start or from end. E.g., [1,3,5,5,3,1]  */
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
void reverse_array(int a[],int b[],int size)
{
	int count=0;
	for(int i=size-1;i>=0;i--)
	{
		b[count++]=a[i];
	}	
}
bool palindrome(int a[],int size)
{
	int first=0;  // index 
	int last=size-1;   // index
	while(first<=last)
	{
		if(a[first]!=a[last])
		{
			return false;
		}
		first++;
	    last--;
	}
	return true;
}
main()
{
	int size;
	printf("Enter how many(size) values you want in Array:\n");
	scanf("%d",&size);
	int arr1[size],arr2[size];
	printf("Enter values in Array:\n");
	input_array(arr1,size);   // call
	printf("\nThe Array values are:\n");
	display_array(arr1,size); // call
	printf("\nThe reverse of Array is:\n");
	reverse_array(arr1,arr2,size); // call
    display_array(arr2,size);
    if(palindrome(arr1,size))  // bool function call 
    {
    	printf("\nThis array is palindrome:");
	}
	else
	{
	printf("\nThis array is not palindrome:");	
	}	
}