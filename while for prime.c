#include<stdio.h>
void main(){
    int num,r2,i,prime;
    printf("enter the range");
    scanf("%d",&r2);
    while(num<=r2)
    {
        prime=1;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
        {
            prime=1;
        }
        }
        if(prime==1)
            printf("%d\t",num);
    }

      num ++;
}

