#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // calculate the sum of the nth power of each digit
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // check if the result is equal to the original number
    if (result == number) {
        printf("%d is an Armstrong number.", number);
    } else {
        printf("%d is not an Armstrong number.", number);
    }

    return 0;
}

