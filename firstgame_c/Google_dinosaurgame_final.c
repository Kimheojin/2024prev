#include <stdio.h>
#include <time.h>//score ���� �ޱ� ����
#include <windows.h>//console�Լ�
#include <conio.h>//getch
#include <stdlib.h>//exit
#include <stdbool.h>//truefalse
#include <string.h>
#include <time.h>//score�Լ�

#pragma warning (disable:4996)

//�⺻ Ű 
//case�Լ��� �̿��ϱ� ����
#define submit_1 4
#define up_1 0
#define left_1 1
#define down_1 2
#define right_1 3

//Startview�Լ� �ڸ���������
#define start_x 15
#define start_y 9

//�ִ� ���� ����
#define jump_high 2

//dino ����
#define dino_2_bottom_y 12

int OnGameKeyBoard();
void ConsoleBasic();//�ܼ� ũ�� ����
void GotoXY(int i, int j);//Ŀ���̵� �Լ�
int StartView();//����ȭ�� ����(�޴� �����)
int KeyBoard();//�����¿� �޾ƿ�
int StartView_1();//����ȭ�� ȭ��ǥ ������ ����
int GameInformation();
//���ΰ�
void dino_1();
void dino_2();
void dino_3();
int GameView();//���� ȭ��
void floor();//�ٴ��Լ�(�߸� �����)(������ �ٴ� ���� ������)
void obstacle_1();//��ֹ� �Լ�
void obstacle_2();//�ð� ���� ������
void clear();//Ŀ�� ����� �Լ�(�ʹ� ��¦��)
void gameover();//�׾����� â

int main()
{
	//�⺻����
	clear();
	ConsoleBasic();
	
	int n = StartView();//15 17 19�� �̷���� �޴����� �޾ƿ�

	int k;


	switch (n)//�޴� �й�
	{
	case 15://���ӽ���
		GameView();
		break;
	case 17://��������
		k = GameInformation();
		if (k != 0);
		main();
		break;
	case 19://���� ����
		system("cls");
		exit(0);//stdliv�� ���� �Ǿ� ����

	}
	return 0;
}

void ConsoleBasic()
{
	system("mode con cols=120 lines=30");//60,30
	//���� �־����� �������� 
	//���δ� 60, ���δ� 30(���� 2ĭ�̶� ���� ��ĭ�� ���Ƽ� ������)
	//������ 2�谡 ���� ��ĭ ũ���̴�.
	//���� ���� 0,0 �̴�.
	system("title dinosaur game by jin");
	//���� �̸�
}

void GotoXY(int i, int j)//Ŀ�� �̵��Լ�
{
	COORD Pos;
	Pos.X = 2*i;//�빮�ڷ� ����(pos�ڿ�)
	//ĭ�� ���߱� ���� 2 ����
	Pos.Y = j;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

//����ȭ��
int StartView()
{
	GotoXY(start_x, start_y);
	printf("$$$$$$$$$$                                     $$$$$$$$$$$$$\n");
	GotoXY(start_x, start_y+1);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+2);
	printf("$$                google dinosaur homage game             $$\n");
	GotoXY(start_x, start_y+3);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+4);
	printf("$$                                                        $$\n");
	GotoXY(start_x, start_y+5);
	printf("$$$$$$$$$$                                     $$$$$$$$$$$$$\n");

	GotoXY(start_x+10, start_y + 6);
	printf("  >   ���ӽ���");//ȭ��ǥ ����� ��ġ 1(start_x + 11, 15)
	GotoXY(start_x+10, start_y + 8);
	printf("      ��������");//ȭ��ǥ ����� ��ġ 2
	GotoXY(start_x+10, start_y + 10);
	printf("      ��������");//ȭ��ǥ ����� ��ġ 3
	GotoXY(start_x+ 3, start_y + 14);
	printf("�⺻ ���۹� = ��:w ��:s ����:�����̽��� ���� : z");
	//ȭ��ǥ ���� ������ ����
	
	//ȭ��ǥ�� ����� ��ġ�� �޾ƿ´�.
	//ó���̶� �������..
	return StartView_1();

	
}
int GameView()
{
	system("cls");//�ʱ�ȭ

	clock_t start = clock();//���۽ð� ����
	clock_t end, cuur;// ����ð��̶� ������ �ð� ���� �ʱ�ȭ
	
	int score = 0;//����
	
	bool jumping = false;//ù��° ��
	bool on_bottom = true;//�ٴڿ� ������ ��
	
	int hight_1 = dino_2_bottom_y;//������ �������(������ų����)
	int ob = 60;//��ֹ� ������ ���� ����
	
	while (true)
	{
		floor(); //26 �ٴڰ�

		obstacle_1(ob);
		
		//�����Լ�
		if (on_bottom && OnGameKeyBoard() == 'z')
		{
			on_bottom = false;
			jumping = true;
		}
		if (jumping)
		{
			hight_1 -= jump_high;
		}
		else
		{
			hight_1 += jump_high;
		}
		if (hight_1 >= dino_2_bottom_y)
		{
			hight_1 = dino_2_bottom_y;
			on_bottom = true;
		}
		if (hight_1 <= 3)
		{
			jumping = false;
		}

		//��ֹ� ������ ó��
		ob-=2;
		if (ob == 2)//ob�� 16
			ob = 60;

		if (ob <= 8 && hight_1 >= dino_2_bottom_y )//�浹 ó���Լ�
		{
		
			gameover(score);//���� �ް� ���
			//���� ����â
			break;//���ϸ� ������
			
		}
		
		//dino�� ���� ��ȭ ����
		if (score <= 15)
		{
			dino_1(hight_1);
		}
		else if (score <= 30)
		{
			dino_2(hight_1);
		}
		else
		{
			dino_3(hight_1);
		}
		
		_sleep(40);//�ʹ� ����
		GotoXY(20, 3);
		
		end = clock();//����ð�(?)�ޱ�
		score = (end - start) / CLOCKS_PER_SEC;//���� 1�ʴ� 1������ ���
		system("cls");//�ܻ� ����
		printf("score : %d", score);//����

		
		
		
	}
	//gameoverâ������ break ���
	system("pause");
	system("cls");
	main();//����ȭ������ ������ ����Լ� ���

	return 0;
}


void gameover(int score)
{
	system("cls");//����
	GotoXY(0, 0);
	printf("���� ��\n");
	printf("my latest score = %d\n\n\n\n\n\n\n\n", score);//���� ���� ����
		
}
int StartView_1()//�޴� ȭ��ǥ ������ ���� �� y�� ��ǥ�� �й� �ҷ��� ����
{
	int standard_y = 15;//���ذ����� ���
	
	while (1)
	{
		int n = KeyBoard();
		switch (n)
		{
		case up_1:
			if (standard_y > 15)//�ʱ갪 15
			{
				GotoXY(start_x + 11, standard_y);
				printf("  ");//���� �ִ��� �����
				standard_y -= 2;//Ŀ����ġ 
				GotoXY(start_x + 11, standard_y);
				printf(">");//ȭ��ǥ ����
			}
			break;
		case down_1:
			if (standard_y < 19)
			{
				GotoXY(start_x + 11, standard_y);
				printf("  ");
				standard_y += 2;//Ŀ�� ��ġ
				GotoXY(start_x + 11, standard_y);
				printf(">");
			}
			break;
		case submit_1:
			
			break;//�����̽��� ������ break �� return ���� ������
		}
		if (n == submit_1)
		{
			return standard_y;
			break;
		}

	}
}
int OnGameKeyBoard()
{
	if (_kbhit() != 0)//�����߿� ����ϴ� keyboard�� �޴� �Լ�
	{
		return _getch();
	}
	return 0;
}
void obstacle_1(int x)//��ֹ� �Լ�
{
	GotoXY((x - 4), 22);
	printf(" $$$ \n");
	GotoXY((x - 4), 23);
	printf(" $$$ \n");
	GotoXY((x - 4), 24);
	printf(" $$$ \n");
	GotoXY((x - 4), 25);
	printf(" $$$ \n");

}
void clear()//Ŀ�� �����ִ� �Լ�(��α׿��� �ۿ�)
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1; 
	cursorInfo.bVisible = FALSE; 
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
//�޴� ���� �Ҷ� Ű���尪 �޴� �Լ�
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
	else
		return 0;
	
}

void floor()//�ٴ��Լ�(�ݺ��� �����)
{
	GotoXY(0, 26);
	for (int i = 0; i < 120; i++)
	{
		printf("=");
	}
}

void dino_1(int y)//�ʱ� ���ΰ�
//����
{
	GotoXY(0, y);
	static bool dino_1 = true;
	printf("           \n");//�ٸ� �ֵ��̶� y�� ������� �̷�����
	printf("           \n");
	printf("           \n");
	printf("           \n");
	printf("           \n");
	printf("           \n");
	printf("           \n");
	printf("           \n");
	printf("    &&&&   \n");
	printf("   &&&&&&  \n");
	printf("  && �� && \n");
	printf("  &&&&&&&& \n");
	if (dino_1)//���� ������ ������ ǥ��
	{
		printf("   &&&&&&  \n");
		printf("   &&  &&    \n");
		dino_1 = false;
	}
	else
	{
		printf("   &&&&&&  \n");
		printf(" &&       &&\n");
		dino_1 = true;
	}

}

void dino_2(int dino_2_y)//2�ܰ�
//Ƽ��� ��
{
	static bool dino_2_leg = true;
	GotoXY(0, dino_2_y);
	printf("            &&&&&&&&     \n");
	printf("           &&&  &&&&&&   \n");
	printf("          &&&&&&&&       \n");
	printf("          &&&&&&&&&&&&   \n");
	printf("          &&&&&&&        \n");
	printf("&        &&&&&&&         \n");
	printf("&&     &&&&&&&&          \n");
	printf("&&&   &&&&&&&&&&&&&      \n");
	printf(" &&&&&&&&&&&&&&          \n");
	printf("  &&&&&&&&&&&&          \n");
	printf("   &&&&&&&&&&&          \n");
	printf("    &&&&&&&&            \n");

	if (dino_2_leg)//�������� ����ؼ� ������ ǥ��
	{
		printf("    $       $           \n");
		printf("  $          $         \n");
		dino_2_leg = false;
	}
	else
	{
		printf("     $     $            \n");
		printf("      $    $         \n");
		dino_2_leg = true;
	}

}
void dino_3(int y)//��� �̸�ǥ�� ����!!
{
	GotoXY(0, y);
	static int p = 0;//�����ܰ�� ������
	printf("    &&&&            \n");
	printf("    &&&&           \n");
	printf("    &&&&&          \n");
	printf("     &&            \n");
	printf("     &&&&&         \n");
	printf("     &���&&&      \n");
	printf("     &&&&  &&&&    \n");
	printf("     &&&&          \n");
	printf("     &&&&          \n");
	
	if (p == 0)//�ٸ� ������ ǥ��
	{
		printf("     &&&&&         \n");
		printf("   &&     &&&      \n");
		printf("  &&         &&    \n");
		printf(" &&          &&&   \n");
		printf("&&&&           &&&&\n");
		p = 1;
	}
	else if (p == 1)
	{
		printf("     &&&&&         \n");
		printf("    &&   &&&       \n");
		printf("    &&     &&      \n");
		printf("    &       &&     \n");
		printf("   &&       &&     \n");
		p = 2;
	}
	else 
	{
		printf("     &&&&         \n");
		printf("     &&&&      \n");
		printf("     &&&&      \n");
		printf("     &&&&      \n");
		printf("     &&&&      \n");
		p = 0;
	}
}


int GameInformation()//���� ����â
{
	system("cls");
	GotoXY(start_x, start_y);
	printf("������ �ϸ鼭 ��ֹ��� ���� �ΰ��� �Ǿ�� �����̴�.\n");
	GotoXY(start_x, start_y + 1);
	printf("\n");
	GotoXY(start_x, start_y + 2);
	printf("15��, 30�ʿ� ��ȭ�� �Ѵ�.\n");
	GotoXY(start_x, start_y + 3);
	printf("\n");
	GotoXY(start_x, start_y + 4);
	printf("���� ȭ������ ������ �ƹ� ��ư�̳� ������\n");

	 
	int n = KeyBoard();//����ȭ�� ������ �ҷ��� return �� ������ ����

	return n;
}

