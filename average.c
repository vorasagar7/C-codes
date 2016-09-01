#include <stdio.h>
#Program to find average of numbers in an array using
int main(void)
{
	int nums[]={1,2,3,4,5,6,7,8,9};
	float avg = averageFun(nums,9);
	printf("the average is %f",avg);
	return 0;

}
float averageFun (int arr[], int size)
{
	int sum=0;
	for(int i=0; i<size;i++)
	{
		sum=sum+arr[i];
	}
	return (sum/size);

}