#include<stdio.h>
#include<ctype.h>
int main(){
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("output.txt","r");
    fp2=fopen("copy.txt","w");

    if (fp1==NULL)
    {
        printf("Error, File is empty");
    }
    while ((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Copy successfull.");
    return 0;
    
    
}