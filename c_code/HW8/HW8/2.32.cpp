#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf_s("%f", &weight);
    printf("Enter height in meters: ");
    scanf_s("%f", &height);

    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Underweight\n");
    }
    else if (bmi < 24.9) {
        printf("Normal\n");
    }
    else if (bmi < 29.9) {
        printf("Overweight\n");
    }
    else {
        printf("Obese\n");
    }

    return 0;
}