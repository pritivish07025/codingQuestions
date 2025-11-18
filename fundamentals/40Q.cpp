#include <stdio.h>
int main() {
    int start, end, count = 0;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    for (int num = start; num <= end; num++) {

        if (num <= 1)
            continue;

        int isPrime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            count++;
        }
    }

    printf("Total prime numbers in the range = %d", count);

    return 0;
}
