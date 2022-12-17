#include <stdio.h>

int main(void) {
	char input[100];
	int arr[26] = {0, };
	for (int i = 0; i < 26; i++)
		arr[i] = -1;

	scanf("%s", input);
	for (int i = 0; input[i] != '\0'; i++) {
		if (arr[input[i] - 'a'] == -1)
			arr[input[i] - 'a'] += i + 1;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
