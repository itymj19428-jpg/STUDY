#include <stdio.h>

int main(void)
{
    double weight;
    double height, height_m;
    double BMI;

    printf("몸무게(kg)와 키(cm) 입력 : ");
    scanf("%lf%lf", &weight, &height);

    height_m = height / 100.0;

    BMI = (weight) / (height_m * height_m);

    if ((BMI >= 20.0) && (BMI < 25.0))
    {
        printf("BMI : %.1lf. 표준입니다.\n", BMI);
    }
    else
    {
        printf("BMI : %.1lf. 체중관리가 필요합니다.\n", BMI);
    }

    return 0;
}