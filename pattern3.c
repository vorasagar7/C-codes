/* pattern */ rows =4;
			*
		*	*	*				2(i)-1 ;i=1; = 1
	*	*	*	*	*			2(i)+1 ; i=2; 3
*	*	*	*	*	*	*
1st step: loop for spaces -> check it till the spaces, put the spaces loop
2nd step: now loop it for printing * -> 2(i)-1 ; if k=1 or else 2(i) + 1 if k=0
2(i)+1; i=2; 5
j<=2(i)+1
i=1; */
#include <stdio.h>
int main()
{
    int i,j,k=0;
	int rows = 4;
	for(i=1;i<=rows;i++)
	{
		
		for(j=1;j<=rows-i;j++)
		{
			printf("\t");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}