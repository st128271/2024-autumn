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

    int nechet = 0;
    int chet = 0;
    for (int i = 0; i < n; ++i)
    {
        if (*(s + i) % 2 != 0) {
            printf("%d ", *(s + i));
            nechet += 1;
        }
    }
    printf("\n");

    for (int i = 0; i < n; ++i)
    {
        if (*(s + i) % 2 == 0) {
            printf("%d ", *(s + i));
            chet += 1;
        }
    }
    printf("\n");

    if (nechet <= chet) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    free(s);

    return 0;
}