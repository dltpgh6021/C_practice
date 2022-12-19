#include <stdio.h>

int check (int, int);

int main(void) {
	int input;
	int num = 1;
	
	scanf("%d", &input);

	while (1) {
		if (check(input, num)) {
			printf("%d \n", num);
			break;
		}
		else if (input == num) {
			printf("0 \n");
			break;
		}
		num++;
	}

	return 0;
}

int check(int input, int num) {
	int sum = 0;
	sum = num;
	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}
	if (sum == input)
		return 1;
	else 
		return 0;
}
