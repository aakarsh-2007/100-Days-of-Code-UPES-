/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go
*/

#include <stdio.h>

enum TrafficLight
{
    RED = 1,
    YELLOW,
    GREEN
};

int main()
{
    int choice;

    printf("Choose a traffic light color:\n");
    printf("1. RED\n");
    printf("2. YELLOW\n");
    printf("3. GREEN\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    enum TrafficLight light = choice;

    switch (light)
    {
    case RED:
        printf("Stop");
        break;
    case YELLOW:
        printf("Wait");
        break;
    case GREEN:
        printf("Go");
        break;
    default:
        printf("Invalid choice");
    }

    return 0;
}
