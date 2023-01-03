#include <stdio.h>

int main(void) { 
	int a, b, c;
	int i = 0;
	int arr[100000] = {0, };
	scanf("%d %d %d", &a, &b, &c);	
	while(a != 0 && b != 0 && c != 0) {
		getchar();
		if(c * c == a * a + b * b || a * a == b * b + c * c || b * b == a * a + c * c)
			arr[i] = 1;
		else 
			arr[i] = -1;
		scanf("%d %d %d", &a, &b, &c);
		i++;
	}
	for (int j = 0; j < i; j++) {
		if(arr[j] == 1)
			printf("right \n");
		else
			printf("wrong \n");
	}
	return 0;
}
