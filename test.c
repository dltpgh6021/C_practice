#include <stdio.h>

int main(void) {
	int input, x;
	int in;
	scanf("%d %d", &input, &x);
	int arr[10000] = {0, };

	for (int i = 0; i < input; i++) {
		scanf("%d", &in);
		arr[i] = in;
	}
	for (int i = 0; arr[i] != 0; i++) {
		if (arr[i] < x)
			printf("%d ", arr[i]);
	}

	return 0;
}
