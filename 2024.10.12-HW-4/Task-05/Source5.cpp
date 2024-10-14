#include<cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
	int a[1000] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	int x = 0;
	scanf_s("%d", &x);
	int minsum = abs(a[0] - x);
	int pm = a[0];
	for (int i = 1; i < n; ++i)
	{
		int actdif = abs(a[i] - x);
		if (minsum > actdif || (actdif == minsum && a[i] < pm)) {
			minsum = actdif;
			pm = a[i];
		}
	}
	printf("%d", pm);
	return 0;
}