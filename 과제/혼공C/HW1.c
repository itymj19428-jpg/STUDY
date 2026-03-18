#include <stdio.h>

int main(void)
{
    double c = 300000.0;
    double rate = 40e12;
    double light_year = c * 365.0 * 24.0 * 60.0 * 60.0;
    double vo_light_year = rate / light_year;

    printf("보이저로 가려면 얼마의 시간이 걸리는가?[광년] : %.1lf\n", vo_light_year);

    return 0;
}