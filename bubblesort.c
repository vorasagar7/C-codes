#include <stdio.h>
void sortedArray(int array[], int size)
{
	int i,j=0;
	for (i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				int temp=array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
}
int main()
{
	int size,i,j=0;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	int storeArray[size];
	
	for(i=0;i<size;i++)
	{
		printf("Enter the %d number",i);
		scanf("%d",&storeArray[i]);
		
	}
	printf("The values is array");
	for(j=0;j<size;j++)
	{
		printf("%d\t",storeArray[j]);
	}
	
	sortedArray(storeArray,size);
	for(j=0;j<size;j++)
	{
		printf("%d\n",storeArray[j]);
	}
	return 0;
}