#include <iostream>

int main(int argc, char* argv)
{
	int* s = 0;
	int n = 0;

	scanf_s("%d", &n);
	s = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", s + i);
	}

	int sum = 0;
	int days = 1;
	int max = *(s + n - 1);
	for (int i = n - 2; i >= 0; --i)
	{
		if (*(s + i) < max) {
			days += 1;
		}
		else {
			sum += max * days;
			days = 1;
			max = *(s + i);
		}
	}
	sum += max * days;

	printf("%d", sum);
	free(s);

	return 0;
}