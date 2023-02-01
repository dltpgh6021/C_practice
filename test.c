#include <stdio.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = n; i <= m; i++) {
		for(int j = 2; j <= i; j++) {
			if(i == 2) {
				printf("%d \n", i);
			}
			if(i % j == 0) {
				break;
			}
			if(j * j > i) {
				printf("%d \n", i);
				break;
			}
		}
	}

	return 0;
}
