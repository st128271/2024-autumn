#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int wdays = 0;
	int wdaysmem = 0;
	for (int i = 0; i < n; ++i) {
		int t = 0;
		scanf_s("%d",&);
		if (t > 0) {
			++wdays;
			if (wdays > wdaysmem) {
				wdaysmem = wdays;
			}
		}
		else {
			wdays = 0;
		}
	}
	printf("%d", wdaysmem);
	return EXIT_SUCCESS;
}