#include<stdio.h>
struct student
{
    int rollnumber;
    char name[30];
    float marks;
};
void main()
{
    struct student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nEnter Roll Number\n");
        scanf("%d",&s[i].rollnumber);
        printf("\nEnter name\n");
        scanf("%s",&s[i].name);
        printf("\nEnter marks\n");
        scanf("%f",&s[i].marks);
    }
    printf("\nStudent's Details\n");
    printf("\n\nRoll number\tName\t\tMarks");
    for(i=0;i<3;i++)
    {
        printf("\n\n%d\t\t%s\t\t%f",s[i].rollnumber,s[i].name,s[i].marks);
    }
}