#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float per;
    int name[50];
};
void main(){
    struct student s1;
    printf("Enter the roll no :");
    scanf("%d",&s1.roll);
    printf("Enter per : ");
    scanf("%f",&s1.per);
    printf("Enter the name 10 : ");
    scanf("%s",&s1.name);
    printf(" Student roll number : %d \n",s1.roll);
    printf(" Student persentage: %f\n",s1.per);
    printf(" Student Name: %s",s1.name);
    return 0;
}
