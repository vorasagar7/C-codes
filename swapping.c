#include <stdio.h>
//void swap (int *x, int *y);
int main(void)
{
		int a=12;
		int b=16;
		printf("the Values of P and Q are %d and %d respect\n",a,b);
		swap(&a,&b);
		printf("\nthe Values of P and Q are %d and %d resp\n",a,b);
		int y[2];
		y[0]=1;
		y[1]=2;
		y[2]=3;
		y[3]=4;
		printf(" Y[3] is %d", y[3]);
		return 0;
	
}
void swap( int*p, int *q)
{
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	printf("The values after swapping are P=%d and Q=%d",*p,*q);
	
}