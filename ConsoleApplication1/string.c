//Завдання №7 
//Ввести речення і ключове слово. Надрукувати всі
//слова з введеного речення,які не містять літер із заданого
//ключового слова, або вивести повідомлення про їх відсутність.
//слова вводяться через довільну кількість пробілів, речення 
//закінчується крапкою

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[1000];
	char word[100];
	char wordL[100];
	char wordU[100];
	
	int i=0;
	int FLAG = 0;
	printf("Enter a string:\n");
	printf("Enter a word:\n");
	gets(str);
	gets(word);

	printf("You've entered a string: \n%s\n", str);
	printf("You've eneterd a word: \n%s\n", word);

	while (word[i] != '\0') {
		wordL[i] = (char)tolower(word[i]);
		wordU[i] = (char)toupper(word[i]);
		++i;
	}
	wordL[i] = '\0';
	wordU[i] = '\0';
	
	//Створює копії введеного слова з верхнім та нижнім регістрами.

	char* pr = strtok(str, " .");
	while (pr) 
	{
		if ((strcspn(pr, wordL) == strlen(pr))\
		&& (strcspn(pr, wordU) == strlen(pr)))//Перевіряє чи є у даному слові символи\
											   з введеного користувачем слова\
											   (первірка виконується з врахуванням регістру)
		{
			printf("The word '%-s' don't contains characters from '%-s'\n", pr,word);
			FLAG = 1;
		}
		pr = strtok(NULL, " .");
	}
	if (FLAG == 0) 
	{
		printf("All the words contains characters from %-s.",word);
	}
	
	return 0;
}