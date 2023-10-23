#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sum1 = sumOfDigits(num1);
    int sum2 = sumOfDigits(num2);

    if (sum1 < sum2) {
        printf("%d \n", num1 );
    } else if (sum1 > sum2) {
        printf("%d \n", num2 );
    } else {
        if (num1 < num2) {
            printf("%d \n", num1 );
        } else {
            printf("%d \n", num2 );
        }
    }

    return 0;
}

