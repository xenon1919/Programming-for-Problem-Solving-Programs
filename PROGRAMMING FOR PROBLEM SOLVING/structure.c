#include<stdio.h>
struct student
{
    int rollnumber;
    char name[30];
    float marks;
};
void main()
{
    struct student s={169, "Rishi", 50};
    printf("The size of structure is %d", sizeof(s));
    printf("\n\n\t Student's Record:\n\n");
    printf("Student's Roll Number:%d\n\n",s.rollnumber);
    printf("Student's Name:%s\n\n",s.name);
    printf("Student's Marks:%f\n\n", s.marks);
}