#include <stdio.h>
#include <windows.h>//consoleâ �����
#include <conio.h>
#include <time.h>//time() 
#include <stdlib.h>//srand() 
#include <stdbool.h>//tru false
//21.10�� 20�ϱ��� �����
//������ 
//���Ŀ� ���� �߰��ϱ�
//�̸� �Է� ���� �� ĳ���� ���� �߰� �ϱ�
#define dino_bottom_y 12
#define obstacle_1_y 15
#define car_1_bottom_y 13
#define bottom_lines_y 25
//�ܼ�â ũ������ �Լ�
//system �Լ� �̿��ϱ�
void SetConsoleView()
{
	system("mode con:cols=120 lines=30");//console â ũ������
	system("title Chrome game homage by 5muji");

}
//Ŀ�� ��ġ ���� �Լ�
//�ܼ�â�� ���� �� �κ��� (0,0)�̴�.
void GotoXY(int x, int y)
{
    COORD pos;
    pos.X = 2 * x;//�ܼ� â���� x 2ĭ�̶� y��ĭ�̶� �����ϰ� ���̴�.
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


//Ű���� �Է¹ް� ��ȯ�ϴ� �Լ�
void keyreward()
{
    if (_kbhit() != 0)
        return _getch();
    return 0;//else ����ϸ� �ȵǳ�
}
//����ȭ��

void start_view(bool i)
{
    GotoXY(10, 10);
    printf("c �� ����");
    GotoXY(10, 11);
    printf("1���� ������ ���º�ȭ");
    GotoXY(10, 12);
    printf(" ");
    GotoXY(10, 13);
    printf("s Ű�� ������ ���� ����");
    if (keyreward == 's')
         i = true;
    return;
}



//�ð� �����Լ� �����
//clock �Լ� �̿��ϱ�
//�̰� ���߿� �����Լ��� �ֱ�
int tuime_1(void)
{
    int i;
    double start, end;
    
    start = (double)clock() / CLOCKS_PER_SEC;

    int sum = 0;
    for (i = 0; i < 10000000; i++)
    {
        sum++;
    }
    end = (((double)clock()) / CLOCKS_PER_SEC);
    printf("���α׷� ����ð� : %f\n", (end - start));


}

//�ٴ��Լ� �����
void bottomlines()
{
    GotoXY(0, bottom_lines_y);
    for (int i = 0; i < 120; i++)
    {
        printf("=");
    }
}

void crong(int dinoY)//��ó : https://blockdmask.tistory.com/344 (�����մϴ�.��)
//���������� ������ ǥ��
{
    GotoXY(0, dinoY);
    static bool legFlag = true;//13ĭ ������ (�� 
    printf("        $$$$$$$ \n");
    printf("       $$ $$$$$$\n");
    printf("       $$$$$$$$$\n");
    printf("$      $$$      \n");
    printf("$$     $$$$$$$  \n");
    printf("$$$   $$$$$     \n");
    printf(" $$  $$$$$$$$$$ \n");
    printf(" $$$$$$$$$$$    \n");
    printf("  $$$$$$$$$$    \n");
    printf("    $$$$$$$$    \n");
    printf("     $$$$$$     \n");
    if (legFlag)//���� �Լ��� ������ ǥ���Ѱ� ����.
    {
        printf("     $    $$$    \n");
        printf("     $$          \n");
        legFlag = false;
    }
    else
    {
        printf("     $$$  $     \n");
        printf("          $$    ");
        legFlag = true;
    }
}
void car_1(int car_y)
{//�ڵ��� �׸���
    GotoXY(0, car_y);
    static bool tire_1 = true;
    printf(" $$$$$$$$$$$$$       \n");
    printf("$$$$$$$$$$$$$$$$   \n");
    printf("$$$$$$$$$$$$$$$$    \n");
    printf("$$$$$$$$$$$$$$$$  \n");
    printf("$$$$$$$$$$$$$$$$ \n");
    printf("$$$$$$$$$$$$$$$$ \n");
    printf("$$$$$$$$$$$$$$$$$ \n");
    printf("$$$$$$$$$$$$$$$$ \n");
    if (tire_1)
    {
        printf("    $$$     $$$  \n");
        printf("   $$$$$    $$$$$ \n");
        printf("    $$$      $$$  \n");
        static tire_1 = false;
    }
    else
    {
        printf("                    \n");
        printf("                    \n");
        printf("                    \n");
        static tire_1 = true;
    }
}


//���º�ȭ �����ϱ�
//�ð� ������ ��� ���ϱ�
//��Ʈ�ڽ� �߰��ϱ�


//�߻��Լ�

//���� ��ֹ� 5�� �����
void obstacle_1(int obstacle_1_x)//������ 3���� ����
{
    GotoXY(obstacle_1_x, obstacle_1_y);
    printf("$$$$$$$\n");
    GotoXY(obstacle_1_x, obstacle_1_y + 1);
    printf(" $$$ \n");
    GotoXY(obstacle_1_x, obstacle_1_y + 2);
    printf(" $$$ \n");
    GotoXY(obstacle_1_x, obstacle_1_y + 3);
    printf(" $$$ \n");
    GotoXY(obstacle_1_x, obstacle_1_y + 4);
    printf(" $$$ \n");
    GotoXY(obstacle_1_x, obstacle_1_y + 5);
    printf(" $$$ \n");
    
}
//������

//������ �Լ�

//�̻��� �浿�Լ� ���� �浹 �Լ�

//�뷡�Լ� ���Խ�Ű��

//gameover ��

//�浿�Լ� ó��



//�����Լ�
int main()
{
    SetConsoleView();//�ܼ� â �Լ�
    
    bool jump = false;
    bool bottom = true;
    const int gravity = 3;

    bool startkey = false;
   
    start_view(startkey);
    while (startkey)
    {
        system("cls");

    }


	return 0;
}
