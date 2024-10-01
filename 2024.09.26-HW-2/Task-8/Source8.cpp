#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int m = 0;
	scanf("%d", &n);
	scanf("%d", &m);
	int t = (m + 2) * n + m * (n + 2);
	if (n == 1 || m == 1) {
		printf("%d", n * m * 4);
	}
	else {
		if (n % 2 == 1 && m % 2 == 1) {
			t -= 2;
		}
		printf("%d", t);
	}
	return EXIT_SUCCESS;
}