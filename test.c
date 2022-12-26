#include <stdio.h>

int main(void) { 
	int a, b, v, h = 0, i = 0;;
	scanf("%d %d %d", &a, &b, &v);

	i = (v - b) / (a - b);
	if((v - b) % (a - b) != 0)
		i++;

	printf("%d \n", i);

	return 0;
}
