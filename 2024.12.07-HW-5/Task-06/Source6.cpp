#include <algorithm>
#include <iostream>

int main(int argc, char* argv)
{
	int* s1 = 0;
	int* s2 = 0;
	int n = 0;
	int m = 0;

	scanf_s("%d", &n);
	scanf_s("%d", &m);
	s1 = (int*)malloc(sizeof(int) * n);
	s2 = (int*)malloc(sizeof(int) * m);

	int mem = 0;
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", s1 + i);
	}
	mem = 0;
	for (int i = 0; i < m; ++i)
	{
		scanf_s("%d", s2 + i);
	}
	std::sort(s1, s1 + n);
	std::sort(s2, s2 + m);

	int ione = 0;
	int itwo = 0;
	int i = 0;
	int j = 0;

	while (ione < n)
	{
		while (*(s1 + ione) > *(s2 + j))
			j += 1;
		itwo = j;

		if (*(s1 + ione) == *(s2 + itwo)) {
			printf("%d ", *(s1 + ione));
		}

		while (i < n && *(s1 + ione) == *(s1 + i))
			i += 1;
		ione = i;
	}

	free(s1);
	free(s2);

	return 0;
}