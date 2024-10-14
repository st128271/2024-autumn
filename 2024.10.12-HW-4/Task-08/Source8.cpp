#include <cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int* v = new int[n];
	for (int i = 0; i < n; ++i)
		scanf_s("%d", &v[i]);
	int m = 0;
	scanf_s("%d", &m);
	for (int i = 0; i < m; ++i)
	{
		int a = 0;
		int b = 0;
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		for (int j = a - 1; j < b; ++j)
			printf("%d ", v[j]);
		printf("\n");
	}
	delete[] v;
	return 0;
}
