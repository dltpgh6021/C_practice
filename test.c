#include <stdio.h>

int main(void) {
	int input;
	int arr[10] = {0, };
	int result = 1;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &input);
		result *= input;
	}
	while (result != 0) {
		arr[result % 10] += 1;
		result /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d \n", arr[i]);
	}
	return 0;
}
