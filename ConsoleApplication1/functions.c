#define _CRT_SECURE_NO_WARNINGS
#include "header.h"

//--------------------------------------------------------------------------------
int IsWrongFormat(struct SNode* n)
{
	
	//Перевіряємо дату народження.
	int iYear = n->m_student.m_date.m_iYear;
	int iMonth = n->m_student.m_date.m_iMonth;
	int iDay = n->m_student.m_date.m_iDay;
	if (iYear < 1970 || iYear > 2010)
		return 1;
	else
	{
		switch (iMonth)
		{
		case 1: if (iDay < 1 || iDay >31) return 1;
		case 2: 
			if (iYear % 4 == 0) {
				if (iDay < 1 || iDay > 29)
					return 1;
			}
			else{
				if (iDay < 1 || iDay > 28)
					return 1;
			}
			break;
		case 3:  if (iDay < 1 || iDay >31) return 1; else break;
		case 4:  if (iDay < 1 || iDay >30) return 1; else break;
		case 5:  if (iDay < 1 || iDay >31) return 1; else break;
		case 6:  if (iDay < 1 || iDay >30) return 1; else break;
		case 7:  if (iDay < 1 || iDay >31) return 1; else break;
		case 8:  if (iDay < 1 || iDay >31) return 1; else break;
		case 9:  if (iDay < 1 || iDay >30) return 1; else break;
		case 10: if (iDay < 1 || iDay >31) return 1; else break;
		case 11: if (iDay < 1 || iDay >30) return 1; else break;
		case 12: if (iDay < 1 || iDay >31) return 1; else break;
		default: return 1;

		}
	}
	//Перевірка оцінок.

	int aiTmp[NUMBER_OF_MARKS] = { n->m_student.m_mark.m_iHist,\
	n->m_student.m_mark.m_iKDM, n->m_student.m_mark.m_iLAAG,\
		n->m_student.m_mark.m_iMath, n->m_student.m_mark.m_iOP };
	for (int i = 0; i < NUMBER_OF_MARKS; i++)
	{
		if (aiTmp[i] < MIN_MARK || aiTmp[i] >MAX_MARK)
		{
			return 1;
		}
	}
	return 0;
}
//--------------------------------------------------------------------------------
int FreeLinkedList(struct SNode** head)
{
	struct SNode* pTmp = *head;
	struct SNode* pPrev = NULL;
	while (pTmp != NULL)
	{
		pPrev = pTmp;
		pTmp = pTmp->m_pNext;
		free(pPrev);
	}
	*head = NULL;
	return 1;
}
//--------------------------------------------------------------------------------
void Interface(struct SNode** head)
{
	struct SNode* pList = *head;
	char str1[100] = "";
	char ch;
	FILE* pFile_to_write;
	printf("If you want to see a sorted list of students in console enter \'s\'.\n"\
			"If you want to see a sorted list of students who was born in fall in console enter\'a\'.\n"\
			"If you want delete all students who has marks 2,3,4,5 sort the list to ramain and show it in console enter \'d\'.\n"\
			"If you want to write data to file enter \'f\'.\n"\
			"If you have finished your work enter \'q\'.\n");
	ch = getchar();
	rewind(stdin);
	if (ch != 'q')
	{
		if (ch == 's')
		{
			MergeSort(&pList);
			ShowList(pList);
		}
		else if (ch == 'a')
		{
			MergeSort(&pList);
			ShowBornInFall(pList);
		}
		else if (ch == 'd')
		{
			MergeSort(&pList);
			DelNodeWithProp(&pList);
			ShowList(pList);
		}
		else if(ch == 'f')
		{
			printf("Enter the name of the file to write to: \n");
			gets_s(str1, 100);
			if (!WriteTofile(str1, pList)) {
				printf("Data has been written to the %s file successfuly.\n", str1);
			}
			else {
				printf("Data hasn't been written to the file.\n");
			}
		}
	}
	else
	{
		return;
	}
}
//--------------------------------------------------------------------------------
int InitStudentList(const char* fileName, struct SNode** head)
{
	int iFLAG = 0;
	if (head == NULL)
	{
		perror("Cannot dereference the NULL pointer.\n");
		return 1;
	}
	char str[200] = "";

	FILE* pFile;
	if ((pFile = fopen(fileName, "r")) == NULL) {
		return 1;
	}

	struct SNode* pTmp = (struct SNode*)malloc(sizeof(struct SNode));
	struct SNode* pPrev = (struct SNode*)malloc(sizeof(struct SNode));
	//struct node* start = *head;

	while (!feof(pFile))
	{
		int iStep = 0;
		fgets(str, 200, pFile);
		char* pr = strtok(str, " .\t\n");
		while (pr != NULL) {
			switch (iStep)
			{
			case 0: if (!IsGoodName(pr)) { iStep++; }
				  else { strncpy(pTmp->m_student.m_sName, pr, 40); } break;
			case 1: if (!IsGoodName(pr)) { iStep++; }
				  else { strncpy(pTmp->m_student.m_iSurname, pr, 40); } break;
			case 2: pTmp->m_student.m_date.m_iDay = atoi(pr); break;
			case 3: pTmp->m_student.m_date.m_iMonth = atoi(pr); break;
			case 4: pTmp->m_student.m_date.m_iYear = atoi(pr); break;
			case 5: pTmp->m_student.m_mark.m_iKDM = atoi(pr); break;
			case 6: pTmp->m_student.m_mark.m_iLAAG = atoi(pr); break;
			case 7: pTmp->m_student.m_mark.m_iOP = atoi(pr); break;
			case 8: pTmp->m_student.m_mark.m_iHist = atoi(pr); break;
			case 9: pTmp->m_student.m_mark.m_iMath = atoi(pr); break;
			default: break;
			}
			pr = strtok(NULL, " .\t\n");
			++iStep;
		}
		if (iStep != 10 || IsWrongFormat(pTmp))
		{
			perror("Information in the file does not follow the format.\n");
			//FreeLinkedList(head);
			iFLAG = 1;
			break;
		}

		if (!(*head)) {
			*head = pTmp;
		}
		struct SNode* pp = (struct SNode*) malloc(sizeof(struct SNode));
		pPrev = pTmp;
		pTmp->m_pNext = pp;
		pTmp = pp;
		pTmp->m_pNext = NULL;
	}
	pPrev->m_pNext = NULL;
	free(pTmp);
	pTmp = NULL;
	fclose(pFile);
	if (iFLAG == 0)
		return 0;
	else
		return 1;
}
//--------------------------------------------------------------------------------
int ReadByLine(struct SNode** head)
{
	if (head == NULL)
		perror("Cannor dereference the pointer");
	char str[200] = "";
	struct SNode* pTmp;
	printf("Enter data in the following format:\n");
	printf("<NAME> <SURNAME> <dd.mm.yyyy> mark1(Computer Math) mark2(Linear algebra) mark3(C lenguage) mark4(History) mark5(Calculus)\n");
	printf("NOTICE: If you have two names, enter them seperated by \'_\'\n");
	gets_s(str, 200);
	if (head == NULL)
	{
		perror("Cannot dereference the NULL pointer.\n");
		return 1;
	}
	struct SNode* p = malloc(sizeof(struct SNode));
	if (!p)
	{
		perror("Cannot allocate memory");
		return 1;
	}
	int iStep = 0;
	char* p1 = strtok(str, " .\t\n");
	while (p1 != NULL) {
		switch (iStep)
		{
		case 0: if (!IsGoodName(p1)) { iStep++; }
			  else { strncpy(p->m_student.m_sName, p1, 40); } break;
		case 1: if (!IsGoodName(p1)) { iStep++; }
			  else { strncpy(p->m_student.m_iSurname, p1, 40); } break;
		case 2: p->m_student.m_date.m_iDay = atoi(p1); break;
		case 3: p->m_student.m_date.m_iMonth = atoi(p1); break;
		case 4: p->m_student.m_date.m_iYear = atoi(p1); break;
		case 5: p->m_student.m_mark.m_iKDM = atoi(p1); break;
		case 6: p->m_student.m_mark.m_iLAAG = atoi(p1); break;
		case 7: p->m_student.m_mark.m_iOP = atoi(p1); break;
		case 8: p->m_student.m_mark.m_iHist = atoi(p1); break;
		case 9: p->m_student.m_mark.m_iMath = atoi(p1); break;
		default: break;
		}
		p1 = strtok(NULL, " .\t\n");
		++iStep;
	}
	if (iStep != 10 || IsWrongFormat(p))
	{
		perror("Wrong format.\n");
		free(p);
		return 1;
	}
	if ((*head) == NULL)
		*head = p;
	else
		(*head)->m_pNext = p;
	p->m_pNext = NULL;
	return 0;
}
//--------------------------------------------------------------------------------
int WriteTofile(const char* fileName, struct SNode* head)
{
	FILE* pF;
	if (((pF = fopen(fileName, "a")) == NULL))
	{
		return 1;
	}
	struct SNode* pTmp = head;
	while (pTmp)
	{
		fprintf(pF, "%-20s\t %-20s\t %-2i.%-2i.%-4i\t %i %i %i %i %i\n",\
			    pTmp->m_student.m_sName, pTmp->m_student.m_iSurname,\
				pTmp->m_student.m_date.m_iDay, pTmp->m_student.m_date.m_iMonth,\
				pTmp->m_student.m_date.m_iYear, pTmp->m_student.m_mark.m_iHist,\
				pTmp->m_student.m_mark.m_iKDM, pTmp->m_student.m_mark.m_iLAAG, \
				pTmp->m_student.m_mark.m_iMath, pTmp->m_student.m_mark.m_iOP);
		pTmp = pTmp->m_pNext;
	}
	return 0;
}
//--------------------------------------------------------------------------------
void AddNode(struct SStudent  pe, struct SNode** start)//Додає елемнт у відсотрований список, зі збереженням відсортованості
															// Якщо ж список є не відсортований, то помістить новий елемент перед елементом
															// чиє призвіще єде наступним у лексикографічному порядку до даного.
{
	struct SNode* pNode;
	int iFLAG = 0;
	pNode = (struct SNode*)malloc(sizeof(*pNode));
	pNode->m_student = pe;
	struct SNode* pPrev, *pTmp;
	pPrev = NULL;
	pTmp = *start;

	while (strcmp(pTmp->m_student.m_iSurname, pe.m_iSurname) < 0 && pTmp->m_pNext != NULL)
	{
		iFLAG = 1;
		pPrev = pTmp;
		pTmp = pTmp->m_pNext;
	}

	if (pTmp->m_pNext == NULL) {
		iFLAG = 2;
	}

	switch (iFLAG) {
	case 0: *start = pNode; pNode->m_pNext = pTmp; break;
	case 1: pPrev->m_pNext = pNode; pNode->m_pNext = pTmp; break;
	case 2: pTmp->m_pNext = pNode; pNode->m_pNext = NULL; break;
	}
}
//--------------------------------------------------------------------------------
int CheckForCondition(const struct SNode* s) // Перевіряє чи елемент списку має оцінки 2,3,4,5 і повертає 1, якщо це правда
										// і - 0, коли це не так.
{
	int A[MAX_MARK+1] = { 0 };
	A[s->m_student.m_mark.m_iHist] = 1;
	A[s->m_student.m_mark.m_iKDM] = 1;
	A[s->m_student.m_mark.m_iLAAG] = 1;
	A[s->m_student.m_mark.m_iMath] = 1;
	A[s->m_student.m_mark.m_iOP] = 1;
	for (int i = 2; i < MAX_MARK+1; i++)
	{
		if (A[i] == 1)
			continue;
		else
			return 0;
	}
	return 1;
}
//--------------------------------------------------------------------------------
void DelNodeWithProp(struct SNode** start)
{
	if (start == NULL)
	{
		perror("Cannot dereference the NULL pointer.\n");
		return;
	}
	struct SNode* prev = NULL;
	struct SNode* tmp = *start;
	while (tmp)
	{
		if (CheckForCondition(tmp))
		{
			if (tmp == *start)
			{
				popFront(start);
				tmp = *start;
			}
			else
			{
				prev->m_pNext = tmp->m_pNext;
				free(tmp);
				tmp = prev->m_pNext;
			}
		}
		else
		{
			prev = tmp;
			tmp = tmp->m_pNext;
		}
	}
}
//--------------------------------------------------------------------------------
void ShowList(const struct SNode* start)
{
	if (!start) {
		printf("Empty list\n");
		return;
	}
	const struct SNode* b = start;
	printf("\t%-10s %-10s\t %-10s \t %-10s \n\n", "Name:", "Surname:", "Birthday:", "Marks:");
	do {
		printf("\t%-10s %-10s\t %2d.%2d.%4d \t %d %d %d %d %d\n", b->m_student.m_sName,\
			b->m_student.m_iSurname, b->m_student.m_date.m_iDay,\
			b->m_student.m_date.m_iMonth, b->m_student.m_date.m_iYear,\
			b->m_student.m_mark.m_iKDM, b->m_student.m_mark.m_iLAAG,\
			b->m_student.m_mark.m_iOP, b->m_student.m_mark.m_iHist, b->m_student.m_mark.m_iMath);
		
		b = b->m_pNext;
	} while (b != NULL);
}
//--------------------------------------------------------------------------------
void ShowHead(struct SNode* start)
{
	if (!start) {
		printf("Empty list\n");
		return;
	}
	struct SNode* b = start;
	printf("\t%-10s %-10s\t %2d.%2d.%4d \t %d %d %d %d %d\n", b->m_student.m_sName,\
		b->m_student.m_iSurname, b->m_student.m_date.m_iDay, b->m_student.m_date.m_iMonth,\
		b->m_student.m_date.m_iYear, b->m_student.m_mark.m_iKDM, b->m_student.m_mark.m_iLAAG,\
		b->m_student.m_mark.m_iOP, b->m_student.m_mark.m_iHist, b->m_student.m_mark.m_iMath);

}
//struct node* getend(struct node* start)//повертає листок
//{
//	if (!start) {
//		printf("NULL pointer\n");
//		return NULL;
//	}
//
//	struct node* tmp;
//	tmp = start;
//	while (tmp->m_pNext != NULL)
//	{
//		tmp = tmp->m_pNext;
//	}
//	return tmp;
//}
//void showStartEnd(struct node* start)//виводить корінь і його сина та листка і його нащадка
//{
//	if (!start) {
//		printf("NULL pointer\n");
//		return;
//	}
//
//	printf("Start: %p, next: %p\nEnd: %p, next:%p\n", start, start->m_pNext, getend(start), getend(start)->m_pNext);
//	
//}
//--------------------------------------------------------------------------------
void popFront(struct SNode** start)
{
	if (!start)
	{
		perror("Cannot dereference the null pointer.\n");
		return;
	}
	if (!(*start))
	{
		return;
	}
	struct SNode* tmp;
	tmp = *start;
	*start = (*start)->m_pNext;
	free(tmp);
	tmp = NULL;
	return;
}
//--------------------------------------------------------------------------------
void ShowBornInFall(struct SNode* start) 
{
	if (!start)
	{
		printf("Empty list\n");
		return;
	}
	struct SNode* tmp = start;
	printf("\t%-10s %-10s\t %-10s \t %-10s \n\n", "Name:", "Surname:", "Birthday:", "Marks");
	while (tmp)
	{
		if (tmp->m_student.m_date.m_iMonth > 8 && tmp->m_student.m_date.m_iMonth < 12)
		{
			ShowHead(tmp);
		}
		tmp = tmp->m_pNext;
	}
}
//--------------------------------------------------------------------------------
//void delete(struct node** start)
//{
//	while (*start)
//	{
//		popFront(start);
//	}
//}

int IsGoodName(char* str)
{
	if (str)
	{
		if (strlen(str) >= 40)
			return 0;
		else
		{
			for (int i = 0; i < strlen(str); i++)
			{
				if (iswalpha(str[i]) || str[i] == '-' || str[i] == '_' || str[i] == '\'')
				{
					continue;
				}
				else {
					return 0;
				}
			}
		}
		return 1;
	}
	return 0;
	
}