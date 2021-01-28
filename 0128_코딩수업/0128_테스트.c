#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main_10(void)
{
	int i, j, sum = 0, story;

	printf("피라미드 층수 : ");
	scanf_s("%d", &story);

	for (i = 1; i <= story; i++) {
		sum += i;
	}
	for (j = i + 1; j <= story; j++) {
		printf("  ");
	}
	for (j = sum; j > sum - i; j--) {
		printf("%2d", j);
	}
	printf("\n");

	return 0;
}