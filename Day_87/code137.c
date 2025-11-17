/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!
*/

#include <stdio.h>
#include <string.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum Role r;
    char input[20];

    printf("Enter role (ADMIN, USER, GUEST): ");
    scanf("%s", input);

    if (strcasecmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcasecmp(input, "USER") == 0)
        r = USER;
    else if (strcasecmp(input, "GUEST") == 0)
        r = GUEST;
    else
    {
        printf("Invalid role!\n");
        return 0;
    }

    switch (r)
    {
    case ADMIN:
        printf("Welcome Admin!\n");
        break;
    case USER:
        printf("Welcome User!\n");
        break;
    case GUEST:
        printf("Welcome Guest!\n");
        break;
    }

    return 0;
}
