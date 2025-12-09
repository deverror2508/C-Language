#include<stdio.h>
#include<ctype.h>
int main(){
    FILE *fp1;
    int n,total=0,i=1;
    fp1 =fopen("output.txt","r");

    if (fp1==NULL)
    {
        printf("Error, Fill is empty");
    }
    
    while ((n=fgetc(fp1))!=EOF)
    {
       total++;  //count characters
    }
    printf("%d",total);
    fclose(fp1);
    
}