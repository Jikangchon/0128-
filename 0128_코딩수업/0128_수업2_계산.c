#include <stdio.h>

//-- �����Լ��� �ʿ��ұ� (BASIC)
int int_add(int x, int y);
int int_minus(int x, int y);
int int_multi(int x, int y);
int int_divide(int x, int y);

void printBar(); //-- �дܼ��� ����ϴ� �Լ�(------=========)
void printBar2();
void printBar3();


// ���α׷� ��Ÿ�� ����Ʈ (STARTING)
int main_02(void) {

	printBar(); //-- (ȣ���� �� �� ���)
	printf("\t\t\t\t\t\t������ ����\n");
	printBar();
	printf("\n\n");

	int num1 = 0, num2 = 0;
	printBar2();
	printf("\t\t\t\t�ΰ��� ���ڸ� �Է����ּ���. : ");
	scanf_s("%d %d", &num1, &num2);
	printBar2();
	printf("\n\n");
	
	printBar3();
	printf("\t\t\t\t\t\t%d + %d = %d\n", num1, num2, int_add(num1, num2));
	printf("\t\t\t\t\t\t%d - %d = %d\n", num1, num2, int_minus(num1, num2));
	printf("\t\t\t\t\t\t%d * %d = %d\n", num1, num2, int_multi(num1, num2));
	printf("\t\t\t\t\t\t%d / %d = %d\n", num1, num2, int_divide(num1, num2));
	printBar3();

	printf("\n\n\n");


	return 0;
}


// 2. �Լ� ������ (�۵�)
int int_add(int x, int y) {
	return x + y;
}
int int_minus(int x, int y) {
	return x - y;
}
int int_multi(int x, int y) {
	return x * y;
}
int int_divide(int x, int y) {
	return x / y;
}

void printBar() { 
	printf("\t\t\t\t=============================================\n");
}
void printBar2() {
	printf("\t\t\t\t---------------------------------------------\n");
}
void printBar3() {
	printf("\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}


// return -> �Լ��� ��