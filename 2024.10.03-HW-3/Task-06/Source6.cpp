#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int nod = a;
	int ostnb = b;
	while (ostnb != 0)
	{
		int nodvar = nod % ostnb;
		nod = ostnb;
		ostnb = nodvar;
	}
	int nok = (a * b) / nod;
	printf("%d", nok);
	return EXIT_SUCCESS;
}