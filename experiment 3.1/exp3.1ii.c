#include <stdio.h>

int main()
{
    float height, weight;
    printf("Enter your weight in kgs:");
    scanf("%f", &weight);
    printf("Enter your height in mts:");
    scanf("%f", &height);

    float bmi;
    bmi = (weight / (height * height));
    printf("BMI= %f", bmi);
    if (bmi < 15)
    {
        printf("Category: Starvation\n");
    }
    else if (bmi >= 15.1 && bmi <= 17.5)
    {
        printf("Category: Anorexic\n");
    }
    else if (bmi >= 17.6 && bmi <= 18.5)
    {
        printf("Category: Underweight\n");
    }
    else if (bmi >= 18.6 && bmi <= 24.9)
    {
        printf("Category: Ideal\n");
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("Category: Overweight\n");
    }
    else if (bmi >= 30 && bmi <= 39.9)
    {
        printf("Category: Obese\n");
    }
    else if (bmi >= 40.0)
    {
        printf("Category: Morbidity Obese\n");
    }

    return 0;
}