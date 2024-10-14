#include <cstdio>

int main(int argc, char* argv[])
{
	int f[1000]{ 0 };
	int n = 0;
	scanf_s("%d", &n);
	int a = 0;
	scanf_s("%d", &a);
	int b = 0;
	scanf_s("%d", &b);
	int c = 0;
	scanf_s("%d", &c);
	int d = 0;
	scanf_s("%d", &d);
	for (int i = 0; i < n; ++i)
	{
		f[i] = i + 1;
	}
	int lk = 1;
	for (int i = a - 1; i < a + (b - a) / 2; ++i)
	{
		int c = f[b - lk];
		f[b - lk] = f[i];
		f[i] = c;
		++lk;
	}
	lk = 1;
	for (int i = c - 1; i < c + (d - c) / 2; ++i)
	{
		int c = f[d - lk];
		f[d - lk] = f[i];
		f[i] = c;
		++lk;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", f[i]);
	}
	return 0;
}