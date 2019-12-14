#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,i,j,ncr;
   
    scanf("%d",&n);
    int a[n],c=0,z=0;
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      if(a[i]==0)
      c++;
      if(a[i]==2)
      z++;
    }
    ncr= c*(c-1)/2 +z*(z-1)/2;
    printf("%d\n",ncr);
  }
}

