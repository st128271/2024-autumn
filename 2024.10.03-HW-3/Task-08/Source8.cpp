#include<iostream>

int main(int argc, char* argv[])
{
	int i = 0;
	int j = 0;
	scanf_s("%d", &i);
	scanf_s("%d", &j);
	if (i == 2 || j == 2)
	{
		i -= 1;
	}
	int nod = i;
	int b = j;
	while (b != 0) {
		int nodvar = nod % b;
		nod = b;
		b = nodvar;
	}
	printf("%d", nod % 1000000000);
	return EXIT_SUCCESS;
}