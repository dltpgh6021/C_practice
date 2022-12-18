#include <stdio.h>

int main(void) {
	int input;
	int arr[10000];
	int top = 0;
	int a, b;
	
	for (int i = 0; ; i++) {
		scanf("%d", &input);
		getchar();

		if (input == 0)
			break;

		a = input;
		b = 0;
		while (1) {
			if (b == 0) {
				if (a % 10 == 0) {
					arr[i] = 0;
					break;
				}
			}
			if (a == b) {
				arr[i] = 1;
				break;
			}
			if (a < b) {
				arr[i] = 0;
				break;
			}

			b = b * 10 + a % 10;
			if (a == b) {
				arr[i] = 1;
				break;
			}
			a /= 10;
		}

		top++;
	}
	for (int i = 0; i < top; i++) {
		if (arr[i] == 1)
			printf("yes \n");
		else if(arr[i] == 0)
			printf("no \n");
	}

	return 0;
}
