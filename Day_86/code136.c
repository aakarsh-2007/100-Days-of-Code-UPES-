/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/

#include <stdio.h>
#include <string.h>

enum Operation
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum Operation op;
    char choice[20];
    int a, b;

    printf("Enter operation (ADD, SUBTRACT, MULTIPLY): ");
    scanf("%s", choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (strcasecmp(choice, "ADD") == 0)
        op = ADD;
    else if (strcasecmp(choice, "SUBTRACT") == 0)
        op = SUBTRACT;
    else if (strcasecmp(choice, "MULTIPLY") == 0)
        op = MULTIPLY;
    else
    {
        printf("Invalid choice!\n");
        return 0;
    }

    switch (op)
    {
    case ADD:
        printf("%d\n", a + b);
        break;
    case SUBTRACT:
        printf("%d\n", a - b);
        break;
    case MULTIPLY:
        printf("%d\n", a * b);
        break;
    }

    return 0;
}
