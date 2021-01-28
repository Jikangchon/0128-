#include <stdio.h>

// 함수의 종류
// 1. 리턴값이 있는 함수
// 2. 리턴값이 없는 함수

// 반환(리턴데이터 타입) 함수명 ( 인자 ) {
// 함수 몸체 (실행문들.... )
// }

// void printAdd() {} <-- 반환값이 없는 함수
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

	printf("함수전 = %d\n", result);

	result = add(a, b);

	printf("함수후 = %d\n", result);

	
	
	addPrint(a, b);
	
	// 함수의 호출
	printAtoZ();

	printf("%d", 10);

	return 0;
}
//
// A to Z까지 출력
void printAtoZ() {

	for (int i = 65; i <= 90; i++) {
		printf("%c", i);
	}
	printf("\n");
	printf("TEST");
}





// 반환갑과 인자가 있는 함수
int add(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	return x - y;
}

int multiple(int x, int y) {
	return x * y;
}
