#include<stdio.h>

int Fact(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    return n*Fact(n-1);
    
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d =%d\n",n,Fact(n));
}