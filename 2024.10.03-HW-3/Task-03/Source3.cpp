#include<iostream>

int main(int argc, char* argv[])
{
	int H = 437;
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		int height = 0;
		scanf_s("%d", &height);
		if (height <= H) {
			printf("Crash %d", i + 1);
			return 0;
		}
	}
	printf("No crash");
	return EXIT_SUCCESS;
}