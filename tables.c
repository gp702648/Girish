#include<stdio.h>
int main()
{
int n1,n2,num,mult,n,i;
printf("enter the number\n");
scanf("%d",&n);
printf("table starting from 1=%d\n",n);
for(num=n1;num<=n;num++)
{
for(i=1;i<=10;i++)
{
mult=i*num;
printf(" %d*%d=%d\n",i,num,mult);
}
}
return 0;
}
