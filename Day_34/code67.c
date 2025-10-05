/*
Q67: Insert an element in an array at a given position.
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40
*/

#include <stdio.h>

int main()
{
    int n, arr[100], pos, num, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d %d", &pos, &num);

    for (i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];

    arr[pos] = num;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
