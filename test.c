#include <stdio.h>

int check(int, int);

int main(void) { 
	int a, b;

	scanf("%d %d", &a, &b);

	if (a >= b) {
		printf("%d \n", check(a, b));
		printf("%d \n", a * b / check(a, b));
	}
	else if (b > a) {
		printf("%d \n", check(b, a));
		printf("%d \n", a * b / check(b, a));
	}

	return 0;
}

int check(int a, int b) {
	if (b != 0) {
		return check(b, a % b);
	}
	else 
		return a;
}
