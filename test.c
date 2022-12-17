#include <stdio.h>

int main(void) {
	int a, b;
	int A = 0, B = 0;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < 3; i++) {
		A += a % 10;
		B += b % 10;
		a /= 10;
		b /= 10;
		if (i == 2)
			break;
		A *= 10;
		B *= 10;
	}
	printf("%d", A > B ? A : B);
	return 0;
}
