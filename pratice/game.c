#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
//�⺻ Ű ����
#define submit_1 4
#define up_1 0
#define left_1 1
#define down_1 2
#define right_1 3

#define start_x 15
#define start_y 9

#define _CRT_SECURE_NO_WARNINGS

void ConsoleBasic();//�ܼ� ũ�� ����
void GotoXY(int i, int j);//Ŀ���̵� �Լ�
void StartView();//����ȭ�� ����(�޴� �����)
int KeyBoard();//�����¿� �޾ƿ�
int StartView_1();//����ȭ�� ȭ��ǥ ������ ����

int main()
{
	ConsoleBasic();
	
	StartView();

	//���� ����
	
	
	
	return 0;
}
void ConsoleBasic()
{
	system("mode con cols=120 lines=30");//75,25
	//���� �Ժη� ���� ����..
	//���δ� 100, ���δ� 25
	//������ 2�谡 ���� ��ĭ ũ���̴�.
	//���� ���� 0,0 �̴�.
	system("title dinosaur game by jin");
	//���� �̸�
}

void GotoXY(int i, int j)
{
	COORD Pos;
	Pos.X = 2*i;//�빮�ڷ� ����
	//ĭ�� ���߱� ���� 2 ����
	Pos.Y = j;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
//���� â�� �������� �������� ���� ��ٸ��� ��
void StartView()
{
	GotoXY(start_x, start_y);
	printf("$$$$$$$$$$                                     $$$$$$$$$$$$$\n");
	GotoXY(start_x, start_y+1);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+2);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+3);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+4);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+5);
	printf("$$$$$$$$$$                                     $$$$$$$$$$$$$\n");

	GotoXY(start_x+10, start_y + 6);
	printf("      ���ӽ���");//ȭ��ǥ ����� ��ġ 0(start_x + 11, 15)
	GotoXY(start_x+10, start_y + 8);
	printf("      ��������");//ȭ��ǥ ����� ��ġ 1
	GotoXY(start_x+10, start_y + 10);
	printf("      ��������");//ȭ��ǥ ����� ��ġ 2
	GotoXY(start_x+ 3, start_y + 14);
	printf("�⺻ ���۹� = ��:w ��:s ��:a ��:d ����:�����̽���");
	//ȭ��ǥ ���� ������ ����
	
	StartView_1();
	
	int u = StartView_1();//ȭ��ǥ�� ����� ��ġ�� �޾ƿ´�.




}
int StartView_1()
{
	int standard_y = 15;
	GotoXY(start_x + 11, standard_y);
	printf(">");
	int n = KeyBoard();
	switch (n)
	{
	case up_1:
		if(standard_y )

	case down_1:
	case submit_1:
		return 

	}
}


//wasd�� ����
int KeyBoard()
{
	char temp = _getch();
	if (temp == 'w' || temp == 'W')
	{
		return up_1;
	}
	else if (temp == 'a' || temp == 'A')
	{
		return left_1;
	}
	else if (temp == 's' || temp == 'S')
	{
		return down_1;
	}
	else if (temp == 'd' || temp == 'D')
	{
		return right_1;
	}
	else if (temp == ' ')
	{
		return submit_1;
	}
	return 0;
}

