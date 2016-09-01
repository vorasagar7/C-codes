/* pattern 
A
B	B
C	C	C	

*/
#include <stdio.h>

int main()
{
    int i,j=0;
	char c='A';
	for(i=0;i<5;i++)
	{
		
		for(j=0;j<=i;j++)
		{
			printf("%c \t",c);
		}
		c++;
		printf("\n");
	}
	return 0;
}