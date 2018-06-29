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
			printf("프로그램 1번 실행\n");
			break;
		case '2':
			//pointer = 함수명;
			printf("프로그램 2번 실행\n");
			break;
		case '3':
			//pointer = 함수명;
			printf("프로그램 3번 실행\n");
			break;
		case '4':
			//pointer = 함수명;
			printf("프로그램 4번 실행\n");
			break;
		default:
			system("cls");
			printf("값을 제대로 입력해주세요\n");
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
		printf("\t %d. 프로그램 %d번\n\n", i, i);
	}
	printf("===========================================================\n\n");
}
void game1(void)
{
	return;
}