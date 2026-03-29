#include <stdio.h>

int main(void)
{
    int num1, num2;
    char character;

    scanf("%d%c%d", &num1, &character, &num2);

    printf("%06d%06d\n", num1, num2);

    return 0;
}