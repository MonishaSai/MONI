#include<stdio.h>
int main()
{
int i,n;
int array[10]={9,6,1,8,4};
printf("enter the number:");
scanf("%d",&n);
for (i=0;i<=n;i++)
{
if(n==array[i])
{
printf("%d exists\n",n);
}
return 0;
}
}

