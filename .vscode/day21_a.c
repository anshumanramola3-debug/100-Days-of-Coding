#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    scanf("%d", &num);
    digits = (int)log10(num);
    firstDigit = num / (int)pow(10, digits);
    lastDigit = num % 10;
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;
    swappedNum = lastDigit * (int)pow(10, digits) + middle * 10 + firstDigit;
    printf("%d\n", swappedNum);
    return 0;
}
