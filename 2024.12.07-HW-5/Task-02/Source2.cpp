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

    int a = 0;
    scanf_s("%d", &a);
    if (a > 0) {
        a = a % n;
    }
    else {
        a = n - ((-a) % n);
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", *(s + (n - a + i) % n));
    }
    free(s);

    return 0;
}