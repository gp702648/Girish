#include<stdio.h>
int main()
{
int i,n,rev,remainder;
printf("enter the size of elements");
scanf("%d",&n);
int a[n];
printf("enter the number of elements");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=(n-1);i>=0;i--)
{
    printf("%d",a[i]);

}
return 0;
}
