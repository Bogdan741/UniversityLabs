#define _CRT_SECURE_NO_WARNINGS
#ifndef HEADER_101
#define HEADER_101

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

#define SEPTEMBER 9			// Номер вересня у календарі.
#define NOVEMBER  11		// Номер листопада у календарі.
#define NUMBER_OF_MARKS 5	//Кількість оцінок студента.
#define MAX_MARK 5			//Максимальна оцінка у списку.
#define MIN_MARK 1			//Мінімальна оцінка у списку.

//Зберігає інформацію про дату народження студента.
struct SDate {
	int m_iDay;
	int m_iMonth;
	int m_iYear;
};

//Зберігає інформацію про оцінки студента.
struct SMarks {
	int m_iKDM;
	int m_iLAAG;
	int m_iOP;
	int m_iHist;
	int m_iMath;
};

//Зберігає всю інформацію про студента.
struct SStudent {
	char m_sName[40];
	char m_iSurname[40];
	struct SDate m_date;
	struct SMarks m_mark;

};

//Вершина однозв'язного списку.
struct SNode {
	struct SStudent m_student;
	struct SNode *m_pNext;
};

//Створює список студентів, прочитаних із файлу. Параметри: назва файлу,
//та адрес вказівника, що є головою створеного однозв'язного списку.
int					InitStudentList(char* fileName, struct SNode** head);

//Записує дані із однозв'язного списку у файл.
//Параметри: ім'я файлу, та вказівник на голову однозв'язного списку.
int					WriteTofile(const char* fileName, struct SNode* head);

//Додає структуру, що містить інформацію про студента у список. 
//Параметри: структура з даними про студента,та адрес вказівника на голову однозв'язного списку.
void				AddNode(struct SStudent  pe, struct SNode** start);

//Видаляє зі однозв'язного списку всіх студентів, що мають оцінки 2,3,4,5.
//Параметри: адреса вказівника на голову однозв'язного списку. 
void				DelNodeWithProp(struct SNode** start);

//Підфункція сортування злиттям. Повертає кількість елементів, що знаходиться в однозв'язному списку.
//Параметри: вказівник на голову однозв'язного списку.
static int			Length(struct SNode* head);

//Підфункція сортування злиттям. Ділить однозв'язний список на два однозв'язних підсписки. 
//Параметри: 
static void			FrontBackSplit(struct SNode* source, struct SNode** frontRef, struct SNode** backRef);

//Підфункція сортування злиттям. Об'єднує відсортованні однозв'язні підсписки в єдиний відсортований однозв'язний підсписок.
static struct SNode* SortedMerge(struct SNode* a, struct SNode* b);

//Функція, що сортує однозв'язний список за прізвищем у низхідному порядку.
//Параметри: адреса на вказівник на однозв'язний список.
void				MergeSort(struct SNode** headRef);

//Виводить весь однозв'язний список у консоль.
//Параметри: вказівник на голову однозв'язного списку.
void				ShowList(const struct SNode* start);

//Виводить голову однозв'язного списку у консоль.
//Параметри: вказівник на голову однозв'язного списку.
void				ShowHead(struct SNode* start);

	//struct node*		getend(struct node* start);
	//void				showStartEnd(struct node* start);

//Видаляє голову однозв'язного списку і робить головою наступний елемент, якщо список порожній нічого не виконує.
//Параметри: адреса вказівника на однозв'язний список.
void				popFront(struct SNode** start);
//void				delete(struct node** start);

//Виводить у консоль перелік всіх студентів, що народились восени.
//Параметри: вказівник на голову однозв'язного списку.
void				ShowBornInFall(struct SNode* start);

//Читає одну стрічку з інформацією про студента з консолі та додає цю інформацію в однозв'язний список.
//Параметри: адреса вказівника на однозв'язний список.
int					ReadByLine(struct SNode** head);

//Інтерфес.
//Параметри: адреса вказівника на однозв'язний список.
void				Interface(struct SNode** head);

//Перевіряє чи інформація про студента є формально правильною.
//Параметри: вказівник на елемент однозв'язного списку.
int					IsWrongFormat(struct SNode* n);

//Звільняє динамічну пам'ять, що займає однозв'язний список.
//Параметри: адреса вказівника на однозв'язний список.
int					FreeLinkedList(struct SNode** head);

//Перевіряє чи ім'я не містить знаків пунктуацій(за винятком "-") та цифр
int IsGoodName(char* str);
#endif