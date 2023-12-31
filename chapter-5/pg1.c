#include <stdio.h>

#define OVERTIME_RATE 12.00  // float overtime_rate = 12.00
#define REGULAR_HOURS 40     // regual_hours = 40

int main() {
    int employeeCount = 10;
    int hoursWorked;
    float overtimePay;

    printf("Enter the number of hours worked for each employee:\n");

    for (int i = 1; i <= employeeCount; ++i) {
        printf("Employee %d: ", i);
        scanf("%d", &hoursWorked);

        if (hoursWorked > REGULAR_HOURS) {
            overtimePay = (hoursWorked - REGULAR_HOURS) * OVERTIME_RATE;
            printf("Overtime pay for Employee %d: Rs. %.2f\n", i, overtimePay);
        } else {
            printf("No overtime pay for Employee %d\n", i);
        }
    }

    return 0;
}
