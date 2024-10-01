#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	int B1[3], B2[3];
	scanf("%d %d %d", &B1[0], &B1[1], &B1[2]);
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (B1[i] > B1[j]) {
				int temp = B1[i];
				B1[i] = B1[j];
				B1[j] = temp;
			}
		}
	}
	scanf("%d %d %d", &B2[0], &B2[1], &B2[2]);
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (B2[i] > B2[j]) {
				int temp = B2[i];
				B2[i] = B2[j];
				B2[j] = temp;
			}
		}
	}

	if (B1[0] > B2[0]) {
		if (B1[1] >= B2[1]) {
			if (B1[2] >= B2[2]) {
				printf("The first box is larger than the second one");
			}
			else {
				printf("Boxes are incomparable");
			}
		}
		else {
			printf("Boxes are incomparable");
		}
	}
	else {
		if (B1[0] < B2[0]) {
			if (B1[1] < B2[1]) {
				if (B1[2] < B2[2]) {
					printf("The first box is smaller than the second one");
				}
				else {
					printf("Boxes are incomparable");
				}
			}
			else {
				printf("Boxes are incomparable");
			}
		}
		else {
			if (B1[1] > B2[1]) {
				if (B1[2] >= B2[2]) {
					printf("The first box is larger than the second one");
				}
				else {
					printf("Boxes are incomparable");
				}
			}
			else {
				if (B1[1] < B2[1]) {
					if (B1[2] <= B2[2]) {
						printf("The first box is smaller than the second one");
					}
					else {
						printf("Boxes are incomparable\n");
					}
				}
				else {
					if (B1[2] > B2[2]) {
						printf("The first box is larger than the second one");
					}
					else {
						if (B1[2] < B2[2]) {
							printf("The first box is smaller than the second one");
						}
						else {
							printf("Boxes are equal");
						}
					}
				}
			}
		}
	}
	return EXIT_SUCCESS;
}