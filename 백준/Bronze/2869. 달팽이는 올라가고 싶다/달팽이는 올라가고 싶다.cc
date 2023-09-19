#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int d, n, h;
	int day = 0;
	scanf("%d %d %d", &d, &n, &h);

	day = (h - d + (d - n) - 1) / (d - n) + 1;
	printf("%d", day);
	return 0;
}