/*Created a structure with next pointer */

#include <stdio.h>

struct Element
{
	struct Element *next;
};
typedef struct Element;
typedef struct List
{
	Element *first;
	Element *last;

};
void list_init(List * list)
{
	list->first=NULL;
	list->last=NULL;
}
int isEmpty(List *list)
{
	if(list->first==NULL && list->last==NULL)
		return 0;
	else
		return 1;
} 
void pushElement(List *list, Element *element)
{
	int i=isEmpty(list)
	if(i==0)
	{
		list->first=element;
		list->last=element;
		element->next = NULL;
	}
	else
	{
		list->last->next=element;
		list->last=element;
		element->next = NULL;
	}
}
Element *pop(List *list)
{
	int i=isEmpty(list)
	if(i==0)
	{
		printf("The Queue is empty so cannot pop any element");
	}
	else
	{
		Element *e = list->first;
		list->first=list->first->next;
		return e;
	
	}
		
}

}

