#include "header.h"

//--------------------------------------------------------------------------------
int Length(struct SNode* head)
{
	int count = 0;
	struct SNode* current = head;
	while (current != NULL)
	{
		count++;
		current = current->m_pNext;
	}
	return(count);
}
//--------------------------------------------------------------------------------
void FrontBackSplit(struct SNode* source, struct SNode** frontRef, struct SNode** backRef)
{

	int iLen = Length(source);
	int i;
	struct SNode* pCurrent = source;
	if (iLen < 2)
	{
		*frontRef = source;
		*backRef = NULL;
	}
	else
	{
		int iHopCount = (iLen - 1) / 2;
		for (i = 0; i < iHopCount; i++)
		{
			pCurrent = pCurrent->m_pNext;
		}
		*frontRef = source;
		*backRef = pCurrent->m_pNext;
		pCurrent->m_pNext = NULL;
	}
}
//--------------------------------------------------------------------------------
struct SNode* SortedMerge(struct SNode* pA, struct SNode* pB)
{
	struct SNode* pResult = NULL;
	if (pA == NULL) return(pB);
	else if (pB == NULL) return(pA);
	if (strcmp(pB->m_student.m_iSurname, pA->m_student.m_iSurname) > 0)
	{
		pResult = pA;
		pResult->m_pNext = SortedMerge(pA->m_pNext, pB);
	}
	else
	{
		pResult = pB;
		pResult->m_pNext = SortedMerge(pA, pB->m_pNext);
	}
	return(pResult);
}
//--------------------------------------------------------------------------------
void MergeSort(struct SNode** headRef)
{
	struct SNode* pHead = *headRef;
	struct SNode* pA;
	struct SNode* pB;
	if ((pHead == NULL) || (pHead->m_pNext == NULL))
	{
		return;
	}
	FrontBackSplit(pHead, &pA, &pB);
	MergeSort(&pA);
	MergeSort(&pB);
	*headRef = SortedMerge(pA, pB);
}
//--------------------------------------------------------------------------------