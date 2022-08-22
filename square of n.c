#include<stdio.h>
int main()
{
  int sum, num,square,n,i;
  printf("enter the number");
  scanf("%d",&n);
  for( i=0;i<n;i++)
  {
    square=i*i;
    printf("%d",square);
    sum=square+sum;

  }
  printf(" the sum ofn odd number %d\n",sum);
  return 0;


}
