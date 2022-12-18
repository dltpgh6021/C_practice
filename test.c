#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y, w, h;
	int arr[4] = {0, };
	int min = 0;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	arr[0] = abs(x - w);
	arr[1] = abs(x);
	arr[2] = abs(y - h);
	arr[3] = abs(y);

	min = arr[0];
	for (int i = 1; i < 4; i++) {
		if (arr[i] < min)
			min = arr[i];
	}
	printf("%d \n", min);

	return 0;
}
