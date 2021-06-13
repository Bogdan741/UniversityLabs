//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "header.h"
int main(void) {
	
	while(1)
	{
		char cT = 0;
		struct SNode* pDBLinked = NULL; // Після завершення роботи, повинна бути звільнений однозв'язний масив, з головою в цій змінній
		printf("Please enter a \'t\' to do a file input or \'c\' to enter the data. To quit enter \'q\'\n");
		cT = getchar();
		cT = tolower(cT);
		rewind(stdin);
		if (cT == 't')
		{
			char s[100] = "";
			printf("Check if your data follow the format\n");
			printf("<NAME> <SURNAME> <dd.mm.yyyy> mark1(Computer Math) mark2(Linear algebra"\
					 "mark3(C language) mark4(History) mark5(Calculus)\n");
			printf("Enter the name of the file to read from:\n");
			gets_s(s, 100);
			if (InitStudentList(s, &pDBLinked)) {
				printf("Cannot read the data.\n");
				//continue;
			}
			else
			{
				Interface(&pDBLinked);
			}

			if(!pDBLinked)//виправлено
				FreeLinkedList(&pDBLinked);
		}
		else if (cT == 'c')
		{
			while (1)
			{
				ReadByLine(&pDBLinked);
				printf("to continue enter \'p\' to quit - any key except \'p\'\n");
				cT = getchar();
				cT = tolower(cT);
				rewind(stdin);
				if (cT == 'p')
					continue;
				else
					break;
			}
			if (pDBLinked)
			{
				Interface(&pDBLinked);
				if (!pDBLinked)
				{
					FreeLinkedList(&pDBLinked);
				}
			}
		}
		else if (cT == 'q')
			break;
		else
			printf("You've entered a wrong letter. Please enter \'t\', \'c\' or \'q\'\n");
	}
}