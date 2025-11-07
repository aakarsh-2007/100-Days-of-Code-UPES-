/*
Q129: A file numbers.txt contains a list of integers separated by spaces.
Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int num, count = 0, sum = 0;
    float avg;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL)
    {
        printf("Error: numbers.txt not found!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1)
    {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0)
    {
        printf("No numbers found in file.\n");
        return 0;
    }

    avg = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
