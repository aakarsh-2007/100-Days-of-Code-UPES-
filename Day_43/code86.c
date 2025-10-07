/*
Q86: Check if a string is a palindrome.
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, len = 0, isPalindrome = 1;

    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
