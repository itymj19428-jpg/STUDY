#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;
    int i, j;
    int n_prime;

    printf("2 이상의 정수를 입력하세요 : ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        n_prime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                n_prime = 0;
                break;
            }
        }
        if (n_prime == 1)
        {
            printf("%5d", i);
            count++;

            if (count % 5 == 0)
            {
                printf("\n");
            }
        }
    }

    return 0;
}