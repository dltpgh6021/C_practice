#include <stdio.h>

int main(void) {
	int input = 0;
	int count = 0;
	int arr[10] = {0, };

	for (int i = 0; i < 10; i++)
		arr[i] = -1;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		for (int j = 0; j <= i; j++) {
			if (arr[j] == input % 42)
				break;
			if (j == i) {
				count++;
				arr[i] = input % 42;
			}
		}
	}

	printf("%d \n", count);
	return 0;
}
