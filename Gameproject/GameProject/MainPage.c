#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void printmain(int size);
void game1(void);
int main()
{
	void(*pointer)(void);
	char keyhit;
	pointer = NULL;
	while (1)
	{
		printmain(4);
		keyhit = _getch();
		_getch();
		switch (keyhit)
		{
		case '1':
			pointer = game1;
			printf("���α׷� 1�� ����\n");
			break;
		case '2':
			//pointer = �Լ���;
			printf("���α׷� 2�� ����\n");
			break;
		case '3':
			//pointer = �Լ���;
			printf("���α׷� 3�� ����\n");
			break;
		case '4':
			//pointer = �Լ���;
			printf("���α׷� 4�� ����\n");
			break;
		default:
			system("cls");
			printf("���� ����� �Է����ּ���\n");
			break;
		}
		if (pointer != NULL)
		{
			pointer();
			pointer = NULL;
			system("cls");
		}
	}
}
void printmain(int size)
{
	int i;
	printf("===========================================================\n\n");
	for (i = 1; i <= size; i++)
	{
		printf("\t %d. ���α׷� %d��\n\n", i, i);
	}
	printf("===========================================================\n\n");
}
void game1(void)
{
	return;
}