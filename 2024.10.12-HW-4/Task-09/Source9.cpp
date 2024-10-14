#include <iostream>

int main(int argc, char* argv[])
{
	int a[1000] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	int h = 0;
	scanf_s("%d", &h);
	int keepi = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] >= h && h > a[i + 1]) {
			keepi = i;
		}
	}
	if (a[n - 1] > h) {
		keepi = n - 1;
	}
	printf("%d", keepi + 2);
	return 0;
}