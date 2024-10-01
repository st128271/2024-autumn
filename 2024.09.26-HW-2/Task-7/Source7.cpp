#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	scanf_s("%d", &k);
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	if ((n / k) * k == n) {
		printf("%d", ((n / k) * 2 * m));
	}
	else if (n > k) {
		printf("%d", ((n / k) * 2 * m) + 2 * m);
	}
	else {
		printf("%d", 2 * m);
	}
	return EXIT_SUCCESS;
}