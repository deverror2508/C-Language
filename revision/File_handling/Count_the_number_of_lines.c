#include<stdio.h>
#include<ctype.h>
int main(){
    FILE *fp;
    int ch , lines=1;
    fp = fopen("output.txt","r");
    if (fp==NULL)
    {
        printf("Error: File not found.");
        return 1;
    }
    while ((ch=fgetc(fp))!=EOF)
    {
        if (ch=='\n')
        {
            lines++;
        }
        
    }
    fclose(fp);
    printf("%d",lines);
    return 0;
    

    
}