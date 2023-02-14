#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *p, const void *q) {
	if (strlen(p) > strlen(q))
		return 1;
	else if (strlen(p) == strlen(q)) {
		return strcmp(p, q);
	}
	else if (strlen(p) < strlen(q))
		return -1;
}

int main(void) {
	int N;
	char arr[20000][51];
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", arr[i]);
		getchar();
	}

	qsort(arr, N, 51, compare);

	for (int i = 0; i < N; i++) {
		if (strcmp(arr[i], arr[i + 1]) != 0)
		printf("%s \n", arr[i]);
	}

	return 0;
}
