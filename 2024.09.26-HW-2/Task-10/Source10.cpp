#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf("%d", &n);
	int fm = n / 5;
	int thm = n - fm * 5;
	if (thm % 3 == 0) {
		int a = thm / 3;
		printf("%d %d", fm, a);
	}
	else {
		fm--;
		thm = n - fm * 5;
		if (thm % 3 == 0) {
			int a = thm / 3;
			printf("%d %d", fm, a);
		}
		else {
			fm--;
			thm = n - fm * 5;
			if (thm % 3 == 0) {
				int a = thm / 3;
				printf("%d %d", fm, a);
			}
			else {
				fm--;
				thm = n - fm * 5;
				if (thm % 3 == 0) {
					int a = thm / 3;
					printf("%d %d", fm, a);
				}
			}
		}
	}
	return EXIT_SUCCESS;
}
