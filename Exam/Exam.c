#include <stdio.h>
//1  яка двозвязному списку мінія місцями перший та передостаній
typedef struct _node
{
	int n;
	struct _node* mPrev;
	struct _node* mNext;
}node;

void dblinked_list_swap(node** head)
{
	node* x1 = *head;
	node* tmp = *head;
	node* pNext = NULL;
	node* pPrev = NULL;
	while (tmp->mNext->mNext != NULL)
	{
		tmp = tmp->mNext;
	}
	pNext = tmp->mNext;
	pPrev = tmp->mPrev;
	*head = tmp;
	(*head)->mPrev = NULL;
	(*head)->mNext = x1->mNext;
	x1->mNext->mPrev = *head;

	x1->mPrev = pPrev;
	x1->mNext = pNext;
	pPrev->mNext = x1;
	pNext->mPrev = x1;
}

void shw(node* h)
{
	node* tmp = h;
	while (tmp)
	{
		printf("%p\n", tmp);
		tmp = tmp->mNext;
	}
}

int main()
{
	node* head = malloc(sizeof(node));
	node* x2 = malloc(sizeof(node));
	head->mPrev = NULL;
	head->mNext = x2;
	x2->mPrev = head;
	node* x3 = malloc(sizeof(node));
	x2->mNext = x3;
	x3->mPrev = x2;
	node* x4 = malloc(sizeof(node));
	x3 -> mNext = x4;
	x4->mPrev = x3;
	x4->mNext = NULL;
	shw(head);
	dblinked_list_swap(&head);
	//shw(head);
	return 0;
}