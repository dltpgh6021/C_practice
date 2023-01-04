#include <stdio.h>

int main(void) {
	int input;
	int arr[1000][14];
	int a[1000];
	int k, n;
	for(int i = 0; i < 1000; i++)
		arr[i][0] = 1;
	for (int i = 0; i < 14; i++)
		arr[0][i] = 1;

	for(int i = 1; i < 1000; i++) {
		for(int j = 1; j < 14; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}

	scanf("%d", &input);
	for(int i = 0; i < input; i++) {
		scanf("%d", &k);
		scanf("%d", &n);
		a[i] = arr[k + 1][n - 1];
	}
	for(int i = 0; i < input; i++) {
		printf("%d \n", a[i]);
	}
	return 0;
}
