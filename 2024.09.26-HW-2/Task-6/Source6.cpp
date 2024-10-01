#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0 && b == 0 && c == 0) {
		printf("-1\n");
		return 0;
	}
	if (a == 0 && b == 0 && c != 0) {
		printf("0\n");
		return 0;
	}
	if (a == 0 && b != 0) {
		printf("1\n");
		printf("%.6f\n", -c / b);
		return 0;
	}
	double d = b * b - 4 * a * c;
	if (d < 0) {
		printf("0\n");
	}
	else if (d == 0) {
		printf("1\n");
		printf("%.6f\n", (-b + sqrt(d)) / (2 * a));
	}
	else {
		printf("2\n");
		printf("%.6f %.6f\n", (-b - sqrt(d)) / (2 * a), (-b + sqrt(d)) / (2 * a));
	}
	return EXIT_SUCCESS;
}