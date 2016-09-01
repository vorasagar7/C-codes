/* To Swap 2 numbers using pointers in C */
#include <stdio.h>
void swap(int *p, int *q)
{
	int temp=*p;
	*p=*q;
	*q=temp;

}
int main()
{
	int a,b=0;
	printf("Enter the 2 numbers to be swapped:");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("\nThe 2 numbers swapped are %d %d",a,b);
	return 0;
}