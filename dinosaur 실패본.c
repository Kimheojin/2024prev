#include <stdio.h>
#include <windows.h>//console창 만들기
#include <conio.h>
#include <time.h>//time() 
#include <stdlib.h>//srand() 
#include <stdbool.h>//tru false
//21.10월 20일까지 만들기
//ㅎㅇㅌ 
//추후에 보스 추가하기
//이름 입력 받은 후 캐릭터 위에 추가 하기
#define dino_bottom_y 12
#define obstacle_1_y 15
#define car_1_bottom_y 13
#define bottom_lines_y 25
//콘솔창 크기지정 함수
//system 함수 이용하기
void SetConsoleView()
{
	system("mode con:cols=120 lines=30");//console 창 크기지정
	system("title Chrome game homage by 5muji");

}
//커서 위치 변경 함수
//콘솔창은 왼쪽 윗 부분이 (0,0)이다.
void GotoXY(int x, int y)
{
    COORD pos;
    pos.X = 2 * x;//콘솔 창에서 x 2칸이랑 y한칸이랑 동일하게 보이다.
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


//키보드 입력받고 반환하는 함수
void keyreward()
{
    if (_kbhit() != 0)
        return _getch();
    return 0;//else 사용하면 안되나
}
//시작화면

void start_view(bool i)
{
    GotoXY(10, 10);
    printf("c 는 점프");
    GotoXY(10, 11);
    printf("1분이 지나면 형태변화");
    GotoXY(10, 12);
    printf(" ");
    GotoXY(10, 13);
    printf("s 키를 누르면 게임 시작");
    if (keyreward == 's')
         i = true;
    return;
}



//시간 점수함수 만들기
//clock 함수 이용하기
//이거 나중에 메인함수에 넣기
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
    printf("프로그램 수행시간 : %f\n", (end - start));


}

//바닥함수 만들기
void bottomlines()
{
    GotoXY(0, bottom_lines_y);
    for (int i = 0; i < 120; i++)
    {
        printf("=");
    }
}

void crong(int dinoY)//출처 : https://blockdmask.tistory.com/344 (감사합니다.ㅠ)
//정적변수로 움직임 표현
{
    GotoXY(0, dinoY);
    static bool legFlag = true;//13칸 점프를 (총 
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
    if (legFlag)//정적 함수로 움직임 표현한거 같다.
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
{//자동차 그리기
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


//형태변화 포함하기
//시간 지나면 모습 변하기
//히트박스 추가하기


//발사함수

//랜덤 장애물 5개 만들기
void obstacle_1(int obstacle_1_x)//공룡은 3까지 점프
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
//아이템

//라이프 함수

//미사일 충동함수 공룡 충돌 함수

//노래함수 포함시키기

//gameover 함

//충동함수 처리



//메인함수
int main()
{
    SetConsoleView();//콘솔 창 함수
    
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
