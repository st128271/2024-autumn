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
    int umn = 1;
    for (int i = 0; i < n; ++i)
    {
        if (*(s + i) > 0) {
            sum += *(s + i);
        }
    }

    int min = 0;
    int max = 0;
    for (int i = 0; i < n; ++i)
    {
        if (*(s + i) > *(s + max)) {
            max = i;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (*(s + i) < *(s + min)) {
            min = i;
        }
    }
    if (min > max) {
        int mem = min;
        min = max;
        max = mem;
    }
    for (int i = min + 1; i < max; ++i)
    {
        umn *= *(s + i);
    }

    printf("%d %d", sum, umn);
    free(s);

    return 0;
}