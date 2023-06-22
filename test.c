#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int k, n;
	long long *klist;
	long long max = 0, max_len = 0;
	scanf("%d %d", &k, &n);
	klist = (long long *)calloc(k, sizeof(long long));
	for(int i = 0; i < k; i++) {
		scanf("%lld", &klist[i]);
		if(max < klist[i]) max = klist[i];
	}
	long long min = 1;
	long long result = 0;
	while(min <= max) {
		result = 0;
		long long mid = (min + max) / 2	;
		for(int i = 0; i < k; i++) { result += klist[i] /mid; }
		if(result >= n && mid > max_len) max_len = mid;
		else if (result < n)max = mid - 1;
		else min = mid  + 1;
	}
	printf("%lld \n", max_len);
	return 0;
}
