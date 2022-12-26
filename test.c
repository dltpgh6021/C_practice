#include <stdio.h>

int fac(int a) {
	if (a == 0)
		return 1;
	else 
		return a * fac(a - 1);
}

int main(void) { 
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d \n", fac(n) / (fac(k) * fac(n - k)));
	return 0;
}
