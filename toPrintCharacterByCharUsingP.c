/* to print character by character using pointers */
#include <stdio.h>

int main()
{
	char c[25];
	char *p;
	printf(" Enter a String:");
	scanf("%s",(c)); /* this will only take till space, we can use scanf("%[^\n]s",(c)) which will take input till enter is pressed. \t till there is a tab. */
	p=c; /* assigning address of char array to pointers */
	printf("Displaying using pointers character by character");
	while(*p!='\0') /*  while loop till pointer is not null */
	{
		printf("%c",*p);
		*p++;
	}

}