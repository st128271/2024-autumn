#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	int nod = n;
	int b = m;
	while (b != 0) {
		int nodvar = nod % b;
		nod = b;
		b = nodvar;
	}
	printf("%d", n / nod);
	return EXIT_SUCCESS;
}