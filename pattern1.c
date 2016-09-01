/* pattern 
*
*	*
*	*	*

*/
#include <stdio.h>

int main()
{
    int i,j=0;
for(i=0;i<5;i++)
{
    for(j=0;j<=i;j++)
    {
        printf("* \t");
    }
    printf("\n");
}
return 0;
}