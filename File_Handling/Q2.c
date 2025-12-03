#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("Student.txt", "r");
    fclose(fp);
    fp = fopen("Student.txt","w");
    fprintf(fp,"Vavel:%d",5);
    fclose(fp);
    fp = fopen("Student.txt","r");
    char str[50];
    fgets(str,"%s",fp);
    printf("%s",str);
    fclose(fp);
}