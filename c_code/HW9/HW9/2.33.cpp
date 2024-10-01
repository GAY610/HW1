#include <stdio.h>

int main() {
    float miles_per_day, cost_per_gallon, miles_per_gallon, parking_fees, tolls, total_cost;

    // 用戶輸入
    printf("Enter total miles driven per day: ");
    scanf_s("%f", &miles_per_day);
    printf("Enter cost per gallon of gasoline: ");
    scanf_s("%f", &cost_per_gallon);
    printf("Enter average miles per gallon: ");
    scanf_s("%f", &miles_per_gallon);
    printf("Enter parking fees per day: ");
    scanf_s("%f", &parking_fees);
    printf("Enter tolls per day: ");
    scanf_s("%f", &tolls);

    // 計算總成本
    total_cost = (miles_per_day / miles_per_gallon * cost_per_gallon) + parking_fees + tolls;

    printf("Your total cost per day of driving is: $%.2f\n", total_cost);

    return 0;
}