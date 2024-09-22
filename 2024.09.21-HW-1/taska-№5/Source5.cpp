#include<iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    scanf_s("%d", &a);
    printf("The next number for the number %d is %d. \nThe previous number for the number %d is %d.\n", a, a + 1, a, a - 1); //я пытался на русском но он не понимает
    return EXIT_SUCCESS;
}