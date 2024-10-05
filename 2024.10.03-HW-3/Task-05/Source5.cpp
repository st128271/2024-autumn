#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int dorogi = 0;
	for (int i = 0; i < n * n; ++i)
	{
		int s = 0;
		scanf_s("%d", &s);
		if (s != 0) {
			dorogi += 1;
		}
	}
	printf("%d", dorogi / 2);
	return EXIT_SUCCESS;
}