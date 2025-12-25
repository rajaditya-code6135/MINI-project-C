#include <stdio.h>

float c_to_f(float c) {
    return (c * 9 / 5) + 32;
}

float f_to_c(float f) {
    return (f - 32) * 5 / 9;
}

float c_to_k(float c) {
    return c + 273.15;
}

float k_to_c(float k) {
    return k - 273.15;
}

int main() {
    int choice;
    float temp;

    printf("\nTemperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter temperature value: ");
    scanf("%f", &temp);

    switch (choice) {
        case 1:
            printf("Result: %.2f F\n", c_to_f(temp));
            break;
        case 2:
            printf("Result: %.2f C\n", f_to_c(temp));
            break;
        case 3:
            printf("Result: %.2f K\n", c_to_k(temp));
            break;
        case 4:
            printf("Result: %.2f C\n", k_to_c(temp));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}