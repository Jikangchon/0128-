#include <stdio.h>

// �Լ��� ����
// 1. ���ϰ��� �ִ� �Լ�
// 2. ���ϰ��� ���� �Լ�

// ��ȯ(���ϵ����� Ÿ��) �Լ��� ( ���� ) {
// �Լ� ��ü (���๮��.... )
// }

// void printAdd() {} <-- ��ȯ���� ���� �Լ�
// char returnChar() 

int add(int x, int y);
int minus(int x, int y);
int multiple(int x, int y);
int xxx(); 
void addPrint();
void printAtoZ();


void addPrint(int x, int y) {
	printf("%d+%d=%d\n", x, y, x + y);

}
int main_01(void)
{
	int a = 10, b = 20;
	int result = a + b;

	printf("�Լ��� = %d\n", result);

	result = add(a, b);

	printf("�Լ��� = %d\n", result);

	
	
	addPrint(a, b);
	
	// �Լ��� ȣ��
	printAtoZ();

	printf("%d", 10);

	return 0;
}
//
// A to Z���� ���
void printAtoZ() {

	for (int i = 65; i <= 90; i++) {
		printf("%c", i);
	}
	printf("\n");
	printf("TEST");
}





// ��ȯ���� ���ڰ� �ִ� �Լ�
int add(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	return x - y;
}

int multiple(int x, int y) {
	return x * y;
}
