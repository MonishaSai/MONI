#include<stdio.h>
int main()
{
int n,s;
scanf("%d",&n);
int i,d,a[n];
scanf("%d",&d);
int count=0;
for (i=0;i<=n;i++)
{
a[i]=d%10;
d=d/10;
}
printf("enter the number to check:");
scanf("%d",&s);
for (i=0;i<=n;i++)
{
if(a[i]==s)
{
count++;
}
printf("%d",count);
}
return 0;
}

