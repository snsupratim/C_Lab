#include <stdio.h>

int isPrime(int num) {
	int i;
    if (num <= 1)
        return 0;

    for ( i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n;
    int count = 0;
    int number = 2;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (count < n) {
        if (isPrime(number)) {
            sum += number;
            count++;
        }
        number++;
    }

    printf("Sum of the first %d prime numbers is: %d\n", n, sum);

    return 0;
}

