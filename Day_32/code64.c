/*
Q64: Find the digit that occurs the most times in an integer number.
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/

#include <stdio.h>

int main()
{
    int n, digit, freq[10] = {0}, max = 0, most = 0;
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    for (digit = 0; digit < 10; digit++)
    {
        if (freq[digit] > max)
        {
            max = freq[digit];
            most = digit;
        }
    }

    printf("%d\n", most);
    return 0;
}
