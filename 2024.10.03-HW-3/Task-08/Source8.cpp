#include<iostream>

int main(int argc, char* argv[])
{
	int i = 0;
	int j = 0;
	scanf_s("%d", &i);
	scanf_s("%d", &j);
	for (int k = 0; k < i; ++k) {

	}
	int nod = i;
	int b = j;
	while (b != 0) {
		int nodvar = nod % b;
		nod = b;
		b = nodvar;
	}
	printf("%d", i / nod);
	return EXIT_SUCCESS;
}