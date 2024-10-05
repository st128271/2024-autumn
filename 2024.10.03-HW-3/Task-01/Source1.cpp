#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int res1 = 0;
	int res0 = 0;
	int i = 0;
	for (int k = 0; k < n; ++k)
	{
		scanf_s("%d", &i);
		if (i == 1) {
			res1 += 1;
		}
		else {
			res0 += 1;
		}
	}
	if (res1 >= res0) {
		printf("%d", res0);
	}
	else {
		printf("%d", res1);
	}
	return EXIT_SUCCESS;
}