#include <stdio.h>

int main(void) {
	char input[1000000];
	char *p = input;
	char a;
	int check[26] = {0, };
	int top = 0, same = 0;

	scanf("%s", input);
	while (*p != '\0') {
		a = *p;
		if (a >= 'a')
			a -= 'a' - 'A';
		check[a - 'A'] += 1;
		p++;
	}
	for (int i = 0; i < 26; i++) {
		if ( check[top] < check[i] ) {
			same = 0;
			top = i;
		}
		else if ( check[top] == check[i] )
			if (top != i)
				same = 1;
	}
	if (same == 1)
		printf("?");
	else 
		printf("%c", 'A' + top);
	return 0;
}
