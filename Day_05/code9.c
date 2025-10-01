/*
Q9: Write a program to calculate simple and compound interest for given principal,
rate, and time.
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float P, R, T;
    float SI, CI;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &P, &R, &T);

    SI = (P * R * T) / 100;
    CI = P * pow((1 + R / 100), T) - P;

    printf("Simple Interest=%.0f, \nCompound Interest=%.2f\n", SI, CI);

    return 0;
}
