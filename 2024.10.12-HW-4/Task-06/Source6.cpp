#include<cstdio>

int main(int argc, char* argv[])
{
	int a[100] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	int b[100] = { 0 };
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &b[i]);
	}
	int pm = b[0] * a[0];
	int keepi = 0;
	for (int s = 1; s < n; ++s)
	{
		int currSum = b[s] * a[s];
		if (currSum > pm) {
			pm = currSum;
			keepi = s;
		}
	}
	printf("%d", keepi + 1);
	return 0;
}