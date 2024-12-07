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

    int min = 0;
    for (int i = 0; i < n; ++i)
    {
        if (*(s + min) > *(s + i)) {
            min = i;
        }
    }

    for (int i = min; i < n; i++)
    {
        printf("%d ", *(s + i));
    }
    for (int i = 0; i < min; i++)
    {
        printf("%d ", *(s + i));
    }
    free(s);

    return 0;
}