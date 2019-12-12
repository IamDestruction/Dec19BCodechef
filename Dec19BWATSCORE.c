#include<stdio.h>
int main()
{
int t,i,value[10]={0};
scanf("%d",&t);
while(t--)
{
int n,sum=0;
scanf("%d",&n);
int p,s,temp;
for(i=0;i<n;i++)
{
scanf("%d %d",&p,&s);
if(value[p]<s)
{

if(p<9)
{
sum=sum+s-value[p];
value[p]=s;
}
}
}
printf("%d\n",sum);
}
return 0;
}
