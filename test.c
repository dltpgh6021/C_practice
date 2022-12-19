#include <stdio.h>

int main(void) { //1, 7, 19, 37, 61, a + 6n
				 //0, 1,  3,  6, 10, 
	int input;
	int count = 0;

	scanf("%d", &input);

	for (int i = 0; ; i++) {
		count += i;
		if (count * 6 + 1 >= input) {
			printf("%d \n", i + 1);
			break;
		}
	}

	return 0;
}
