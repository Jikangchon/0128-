#include <stdio.h>

//-- 무슨함수가 필요할까 (BASIC)
int int_add(int x, int y);
int int_minus(int x, int y);
int int_multi(int x, int y);
int int_divide(int x, int y);

void printBar(); //-- 분단선을 출력하는 함수(------=========)
void printBar2();
void printBar3();


// 프로그램 스타팅 포인트 (STARTING)
int main_02(void) {

	printBar(); //-- (호출을 할 때 사용)
	printf("\t\t\t\t\t\t간단한 계산기\n");
	printBar();
	printf("\n\n");

	int num1 = 0, num2 = 0;
	printBar2();
	printf("\t\t\t\t두개의 숫자를 입력해주세요. : ");
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


// 2. 함수 구현부 (작동)
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


// return -> 함수의 끝