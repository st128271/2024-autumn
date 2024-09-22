#include<iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    scanf_s("%d", &a);
    printf("%d", (a/100) + ((a % 100) / 10) + (a % 10) ); //актуально только в условиях этой задачи (3-= значного числа)
    return EXIT_SUCCESS;
}