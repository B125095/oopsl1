#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];

    printf("Enter details of 5 students:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t%-10s\t%.2f\n",
               s[i].rollNo,
               s[i].name,
               s[i].marks);
    }

    return 0;
}