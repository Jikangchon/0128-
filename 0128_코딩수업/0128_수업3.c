#include <stdio.h>

// a�� ���� ������. a-z, b��� ���� ������ b - z ���
// 1. ���� �ҹ��ڸ� ���� a�� 97 - z 122 (ASCII)
// if - else
// 2. �Էµ� �ҹ��ڸ� ��������, z������ ����Ѵ�. ex) �Է� ���� z�� �����? z
// for, while, do while

char printChar(char seed);

int main(void) {

	char input = 0;

	do {

		printf("\n\n\n\n\t����ҹ��ڷ� ���۹��ڸ� �Է����ּ��� :");
		scanf_s("\t\t\t%c", &input);
		if (printChar(input)) {
			break;
		}
	} while (1);

	return 0;
}

char printChar(char seed) { // seed ����� �Է°�
	if (seed >= 97 && seed <= 122) { // �Է¹��ڰ� 97 �̻� 122�����϶�
		for (; seed <= 122; seed++) {
			printf("%c", seed);
		}
		printf("\n");
		return 1;
	}
	else {
		printf("�Է��Ͻ� ���� ���� �ҹ��ڰ� �ƴմϴ�. \n\n");

	}
}

/*
void printChar(char seed) { // seed ����� �Է°�
	if(seed >= 97 && seed <= 122) { // �Է¹��ڰ� 97 �̻� 122�����϶�
		for (; seed <= 122; seed++) {
			printf("%c", seed);
		}
		printf("\n");
	} else {
		printf("�Է��Ͻ� ���� ���� �ҹ��ڰ� �ƴմϴ�. \n\n");
	
	}
}
*/