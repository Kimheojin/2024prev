#include <stdio.h>
#include <stdlib.h>//퀵정렬이 선언된 헤더파일
struct NODE {
	struct node* next;
	int data;
};

int main()
{
	ch_1();
	ch_2();
	ch_3();
	ch_4();

	return 0;
}

int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
		return -1;
	if(num1 > num2)
		return 1;

	return 0;
}
int ch_1()//퀵정렬이 효율이 제일 좋다.
{
	int numarr[10] = { 8,4,2,5,3,7,10,1,6,9 };

	qsort(numarr, sizeof(numarr) / sizeof(int), sizeof(int), compare);

	for (int i = 0; i < 10; i++)
	{
		printf("%d", numarr[i]);
	}

	printf("\n");
	return 0;
}
int ch_2()
{//연결 리스트 구현하기
	//자료구조
	//연결리스트는 데이터가 담긴 노드를 일렬로 연결해 놓았다고 
	struct NODE* head = malloc(sizeof(struct NODE));
	struct NODE* node1 = malloc(sizeof(struct NODE));
	head->next = node1;
	node1->data = 10;

	struct NODE* node2 = malloc(sizeof(struct NODE));
	node1->next = node2;
	node2->data = 20;

	node2->next = NULL;

	struct NODE* curr = head->next;

	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	free(node2);
	free(node1);
	free(head);
	return 0;
}
void addfirst(struct NODE* target, int data)
{
	struct NODE* newnode = malloc(sizeof(struct NODE));
	newnode->next = target->next;
	newnode->data = data;

	target->next = newnode;
}
int ch_3()
{//노드 추가함수 만들기
	struct NODE* head = malloc(sizeof(struct NODE));

	head->next = NULL;

	free(head);

	return 0;
}
int ch_4()
{
	return 0;
}