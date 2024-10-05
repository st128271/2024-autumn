#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int nomer = -1;
	int max_age = 0;
	for (int i = 0; i < n; ++i)
	{
		int v = 0;
		int s = 0;
		scanf_s("%d", &v);
		scanf_s("%d", &s);
		if (s == 1 && v > max_age) {
			nomer = i + 1;
			max_age = v;
		}
	}
	printf("%d", nomer);
	return EXIT_SUCCESS;
}