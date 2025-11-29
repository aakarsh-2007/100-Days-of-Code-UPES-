/*
Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
*/

#include <stdio.h>

struct Student
{
    char name[20];
    int roll;
    int marks;
};

int main()
{
    int n, i, topperIndex = 0;
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++)
    {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[topperIndex].marks)
        {
            topperIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}
