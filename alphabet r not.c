#include<stdio.h>
void main()
{
    char d;
    printf("enter the value of d\n");
    scanf("%c",&d);
    ((d>='a'&& d<='z')||(d>='A'&&d<='Z'))?
    printf("value is alphabet\n"):
    printf("value is not alphabet\n");

}
