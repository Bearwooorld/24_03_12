#include <stdio.h>

int main() {
	int x = 0;
	int sum = 0;
	
	for (int i = 2; i <= 100; i++) {
		for (x= 2; x < i; x++) {
			if (i % x == 0)
				break;
		}
		if (x == i)
			sum += x;
	}
	printf("0부터 100까지 더한 소수의 합은 %d", sum);
}
