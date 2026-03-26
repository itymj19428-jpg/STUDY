#include <stdio.h>

int main(void)
{
    int a, b;
    int sum, diff, prod, quo;
    char character;

    printf("사칙연산 입력(정수) : ");
    scanf("%d%c%d", &a, &character, &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;

    if (character == '+')
    {
        printf("a+b=%d\n", sum);
    }
    else if (character == '-')
    {
        printf("a-b=%d\n", diff);
    }
    else if (character == '*')
    {
        printf("a*b=%d\n", prod);
    }
    else if (character == '/')
    {
        if (b == 0)
        {
            printf("계산에 0이 들어갈수 없습니다.\n");
        }
        else
        {
            quo = a / b;
            printf("a/b=%d\n", quo);
        }
    }

    return 0;
}