#include <stdio.h>

struct st
{
    int roll;
    char name[10];
    char course[10];
} s[2];

int main()
{
    for (int i = 1; i <= 2; i++)
    {
        printf("Enter the %d Student Details \n", i);
        printf("Enter the Name\n");
        scanf("%s", &s[i].name);
        printf("Enter the Roll No\n");
        scanf("%d", &s[i].roll);
        printf("Enter the course\n");
        scanf("%s", &s[i].course);
    }

    for (int i = 1; i <= 2; i++)
    {
        printf("\nEnter the %d Student Details \n", i);
        printf("%s\t", s[i].name);
        printf("%d\t", s[i].roll);
        printf("%s\t", s[i].course);
    }
}