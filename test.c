#include <stdio.h>

int main(void) { 
	int num, input;
	int arr[10000] = {0, };
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &input);
		arr[input - 1]++;
	}
	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < arr[i]; j++)
			printf("%d \n", i + 1);
	}
	return 0;
}
