#define _CRT_SECURE_NO_WARNINGS
#ifndef HEADER_101
#define HEADER_101

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

#define SEPTEMBER 9			// ����� ������� � ��������.
#define NOVEMBER  11		// ����� ��������� � ��������.
#define NUMBER_OF_MARKS 5	//ʳ������ ������ ��������.
#define MAX_MARK 5			//����������� ������ � ������.
#define MIN_MARK 1			//̳������� ������ � ������.

//������ ���������� ��� ���� ���������� ��������.
struct SDate {
	int m_iDay;
	int m_iMonth;
	int m_iYear;
};

//������ ���������� ��� ������ ��������.
struct SMarks {
	int m_iKDM;
	int m_iLAAG;
	int m_iOP;
	int m_iHist;
	int m_iMath;
};

//������ ��� ���������� ��� ��������.
struct SStudent {
	char m_sName[40];
	char m_iSurname[40];
	struct SDate m_date;
	struct SMarks m_mark;

};

//������� ������'������ ������.
struct SNode {
	struct SStudent m_student;
	struct SNode *m_pNext;
};

//������� ������ ��������, ���������� �� �����. ���������: ����� �����,
//�� ����� ���������, �� � ������� ���������� ������'������ ������.
int					InitStudentList(char* fileName, struct SNode** head);

//������ ��� �� ������'������ ������ � ����.
//���������: ��'� �����, �� �������� �� ������ ������'������ ������.
int					WriteTofile(const char* fileName, struct SNode* head);

//���� ���������, �� ������ ���������� ��� �������� � ������. 
//���������: ��������� � ������ ��� ��������,�� ����� ��������� �� ������ ������'������ ������.
void				AddNode(struct SStudent  pe, struct SNode** start);

//������� � ������'������ ������ ��� ��������, �� ����� ������ 2,3,4,5.
//���������: ������ ��������� �� ������ ������'������ ������. 
void				DelNodeWithProp(struct SNode** start);

//ϳ�������� ���������� �������. ������� ������� ��������, �� ����������� � ������'������ ������.
//���������: �������� �� ������ ������'������ ������.
static int			Length(struct SNode* head);

//ϳ�������� ���������� �������. ĳ���� ������'����� ������ �� ��� ������'����� ��������. 
//���������: 
static void			FrontBackSplit(struct SNode* source, struct SNode** frontRef, struct SNode** backRef);

//ϳ�������� ���������� �������. ��'���� ����������� ������'��� �������� � ������ ������������ ������'����� ��������.
static struct SNode* SortedMerge(struct SNode* a, struct SNode* b);

//�������, �� ����� ������'����� ������ �� �������� � ���������� �������.
//���������: ������ �� �������� �� ������'����� ������.
void				MergeSort(struct SNode** headRef);

//�������� ���� ������'����� ������ � �������.
//���������: �������� �� ������ ������'������ ������.
void				ShowList(const struct SNode* start);

//�������� ������ ������'������ ������ � �������.
//���������: �������� �� ������ ������'������ ������.
void				ShowHead(struct SNode* start);

	//struct node*		getend(struct node* start);
	//void				showStartEnd(struct node* start);

//������� ������ ������'������ ������ � ������ ������� ��������� �������, ���� ������ ������� ����� �� ������.
//���������: ������ ��������� �� ������'����� ������.
void				popFront(struct SNode** start);
//void				delete(struct node** start);

//�������� � ������� ������ ��� ��������, �� ���������� ������.
//���������: �������� �� ������ ������'������ ������.
void				ShowBornInFall(struct SNode* start);

//���� ���� ������ � ����������� ��� �������� � ������ �� ���� �� ���������� � ������'����� ������.
//���������: ������ ��������� �� ������'����� ������.
int					ReadByLine(struct SNode** head);

//��������.
//���������: ������ ��������� �� ������'����� ������.
void				Interface(struct SNode** head);

//�������� �� ���������� ��� �������� � ��������� ����������.
//���������: �������� �� ������� ������'������ ������.
int					IsWrongFormat(struct SNode* n);

//������� �������� ���'���, �� ����� ������'����� ������.
//���������: ������ ��������� �� ������'����� ������.
int					FreeLinkedList(struct SNode** head);

//�������� �� ��'� �� ������ ����� ����������(�� �������� "-") �� ����
int IsGoodName(char* str);
#endif