#include<stdio.h>
int main()
{
    int number;
    printf("enter the number");
    scanf(" %d ",&number);
    (number%11==0||number%11==1)?
    printf("number is special\n"):
        printf("number is number\n");
}
