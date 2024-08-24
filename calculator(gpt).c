#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Divide by zero.");
            } else {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f", num1, num2, result);
            }
            break;

        default:
            printf("Error: Invalid operator.");
            break;
    }

    return 0;
}

