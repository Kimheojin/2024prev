#include <iostream>
#define SQUARE(x) ((x)*(x))
int ch_print(void)//14p
{

	int num = 20;
	std::cout << "Hello world!" << std::endl;
	std::cout << "Hello " << "world!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
	//std::cout �� <<�� �̿��ؼ� ����ϴµ�
	//std::endl�� �̿��ؼ� �ٹٲ� ����
	//iostream �� �� �ֽŹ����ε�

}
int ch_scan(void)//17p
{
	int val1;
	std::cout << "ù��° ���� �Է�: ";
	std::cin >> val1;
	//������ �Է¿��� ������� ���� iostream �� �ʿ��ϴ�
	//Ű����κ����� ������ �Է¿��� std::cin �� >>�����ڰ� �ʿ��ϴ�
	//������ ������ ��𼭵� �����ϴ�.
	int val2;
	std::cout << "�ι�° ���� �Է�: ";
	std::cin >> val2;
	//�Է¿����� ������ ������ �ʿ� ����.
	int result = val1 + val2;
	std::cout << "���� ���:" << result << std::endl;
	//������ ���� ������ �ʿ� ����,
	return 0;
}
int ch_if(void)//19p
{
	int val1,val2;
	int result = 0;
	std::cout << "�� ���� �����Է�:";
	std::cin >> val1 >> val2;//�������� ������ �Է� ����

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)//���� �� ���� ���� ����
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "�� �� ������ ���� ��: " << result << std::endl;

	return 0;
}
int ch_jjj(void)//21p
{//�迭 ����� ���ڿ� �����
	char name[100];
	char lang[200];

	std::cout << "�̸��� �����Դϱ�?";
	std::cin >> name;

	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���?";
	std::cin >> lang;

	std:: cout << "�� �̸���" << name << "�Դϴ�,\n";
	std::cout << "���� �����ϴ� ����" << lang << "�Դϴ�." << std::endl;
	return 0;
}
void myfunc(void)
{
	std::cout << "myfunc(void) called" << std::endl;
}

void myfunc(char c)
{
	std::cout << "myfunc(char c) called" << std::endl;
}

void myfunc(int a, int b)
{
	std::cout << "myfunc(int a, int b) called" << std::endl;
}

int p_2525(void)
{//�Լ� �����ε�
	//c��� ������ ������ ���� ������ �̸��� �Լ��� ���ǵǴ� ���� ������� �ʴ´�.
	//c++�� ȣ���� �Լ��� ã���� �Լ��� �̸�, �Ű������� ������ ���ÿ� ����.
	//c���� �Լ��� �̸����� ����ؼ� �Ѵ�.
	//�Ű������� �ڷ��� �Ǵ� ������ �ٸ��� �Լ��� �����ε��� ����Ѵ�.
	//but ��ȯ���� �ٸ��ٰ� �ؼ� �׷����� �ƴϴ�.
	myfunc();
	myfunc('A');
	myfunc(12, 13);
	return 0;
}
//swap �� �����ϴ� ����
void swap(void* ptr1, void *ptr2)
{
	void* b;
	b = ptr1;
	ptr1 = ptr2;
}
int page_26(void)
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	return 0;
}
int adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}
int pg28()
{//�Ű������� ����Ʈ �� = �⺻������ ���� ���ִ� ���� �ǹ�
	//�Լ� ȣ��� ���ڸ� �������� ������ 7�� ���޵� ������ �����ϰڴ�.
	std::cout << adder() << std:: endl;
	std::cout << adder(5) << std::endl;
	std::cout << adder(3, 5) << std::endl;//�Լ��� �����ϴ� �κп��� default���� ������ �־�� �Ѵ�.
	//����Ʈ ���� �׻� 
	// ����� ���ų� �ص� ������ �߻��Ѵ�.
	// �׻� �����ʺ��� ä�� �־��� �Ѵ�
	//��� ������ ������ �߻�
	return 0;

}
int pg_33()
{//�ζ��� �Լ�inline
	//�ǿ��ϸ� ���α׷� �ڵ���� ������ �� ���� �Լ� ��� ��
	//��ũ�� �Լ��� ����ϸ� ����ӵ����� ������ �ִ�.
	std::cout << SQUARE(5) << std::endl;//��ó�� ������ ��ġ��
	//

	return 0;
}
inline int SQUARE_1(int x)
{
	return x * x;
}//��ũ�� �Լ��� �������� �սǵ� �Ͼ�� �ʴ´�.
//���ø��̶�� ���� �̿��ϸ� ������ ���߿� �ٽ� ���´�.
int pg_36()
{
	std::cout << SQUARE_1(5) << std::endl;
	std::cout << SQUARE_1(12) << std::endl;
	return 0;
}

int main()
{
	//�̸�����(name space) �Ұ�
	//�̸��� �ٿ����� ����
	//���״�� Ư�� ������ �̸��� �ٿ��ֱ� ���� ������ ���
	return 0;

}