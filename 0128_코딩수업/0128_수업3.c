#include <stdio.h>

// a란 값을 넣은면. a-z, b라는 값을 넣으면 b - z 출력
// 1. 영문 소문자만 가능 a는 97 - z 122 (ASCII)
// if - else
// 2. 입력된 소문자를 시작으로, z까지만 출력한다. ex) 입력 값이 z면 출력은? z
// for, while, do while

char printChar(char seed);

int main(void) {

	char input = 0;

	do {

		printf("\n\n\n\n\t영어소문자로 시작문자를 입력해주세요 :");
		scanf_s("\t\t\t%c", &input);
		if (printChar(input)) {
			break;
		}
	} while (1);

	return 0;
}

char printChar(char seed) { // seed 사용자 입력값
	if (seed >= 97 && seed <= 122) { // 입력문자가 97 이상 122이하일때
		for (; seed <= 122; seed++) {
			printf("%c", seed);
		}
		printf("\n");
		return 1;
	}
	else {
		printf("입력하신 값이 영문 소문자가 아닙니다. \n\n");

	}
}

/*
void printChar(char seed) { // seed 사용자 입력값
	if(seed >= 97 && seed <= 122) { // 입력문자가 97 이상 122이하일때
		for (; seed <= 122; seed++) {
			printf("%c", seed);
		}
		printf("\n");
	} else {
		printf("입력하신 값이 영문 소문자가 아닙니다. \n\n");
	
	}
}
*/