#include <stdio.h>

int main(void) {
	int input;
	int score;
	float result = 0;
	int max = 0;
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		scanf("%d", &score);
		if (score > max)
			max = score;
		result += score;
	}
	result = result / max * 100 / input;
	printf("%f", result);
	return 0;
}
