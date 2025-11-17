/*
Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days
*/

#include <stdio.h>
#include <string.h>

enum Month
{
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main()
{
    enum Month m;
    char month[10];

    printf("Enter month (e.g., JAN, FEB, MAR): ");
    scanf("%s", month);

    if (strcasecmp(month, "JAN") == 0)
        m = JAN;
    else if (strcasecmp(month, "FEB") == 0)
        m = FEB;
    else if (strcasecmp(month, "MAR") == 0)
        m = MAR;
    else if (strcasecmp(month, "APR") == 0)
        m = APR;
    else if (strcasecmp(month, "MAY") == 0)
        m = MAY;
    else if (strcasecmp(month, "JUN") == 0)
        m = JUN;
    else if (strcasecmp(month, "JUL") == 0)
        m = JUL;
    else if (strcasecmp(month, "AUG") == 0)
        m = AUG;
    else if (strcasecmp(month, "SEP") == 0)
        m = SEP;
    else if (strcasecmp(month, "OCT") == 0)
        m = OCT;
    else if (strcasecmp(month, "NOV") == 0)
        m = NOV;
    else if (strcasecmp(month, "DEC") == 0)
        m = DEC;
    else
    {
        printf("Invalid month!\n");
        return 0;
    }

    switch (m)
    {
    case JAN:
        printf("31 days\n");
        break;
    case FEB:
        printf("28 or 29 days\n");
        break;
    case MAR:
        printf("31 days\n");
        break;
    case APR:
        printf("30 days\n");
        break;
    case MAY:
        printf("31 days\n");
        break;
    case JUN:
        printf("30 days\n");
        break;
    case JUL:
        printf("31 days\n");
        break;
    case AUG:
        printf("31 days\n");
        break;
    case SEP:
        printf("30 days\n");
        break;
    case OCT:
        printf("31 days\n");
        break;
    case NOV:
        printf("30 days\n");
        break;
    case DEC:
        printf("31 days\n");
        break;
    }

    return 0;
}
