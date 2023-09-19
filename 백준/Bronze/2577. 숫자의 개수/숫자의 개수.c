#include <stdio.h>

int main() {
	int a, b, c, result=0 ;
	scanf("%d %d %d", &a, &b, &c);
	result = a * b * c;
	int arr[10] = {0};

	while (1) {
		if (result >= 10) {
			arr[(result % 10)]++;
			result /= 10;
		}

		else {
			arr[result]++;
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}