#include <stdio.h>
#include <float.h>

int main(void) {
	printf("the size of float is %d\n", sizeof(float));
	printf("the min size is %E",FLT_MIN);
	printf("\nthe max size is %E",FLT_MAX);
	char a;
	printf("\nValue of a is %d",a);
	
	int q=13; // 1 1 0 1
	int w=10; // 1 0 0 0
	printf("the value of Q&W is %d",q&w);
	printf("the value of Q|W is %d",q|w);
	printf("the value of Q^W is %d",q^w);
	printf("the value of q>>1 is %d\n", q>>1);
	printf("the value of q>>2 is %d\n",q>>2);
	printf("the value of q<<1 is %d\n", q<<1);
	printf("the value of q<<2 is %d\n", q<<2);
	int m=5;
	int n=8;
	m=m+n;
	n=m-n;
	m=m-n;
	printf("The value of M & N is %d, %d",m,n);
	
	
	return 0;
}
