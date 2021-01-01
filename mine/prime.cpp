#include<stdio.h>

int *prime(int a[],int n,int k)
{
    int j;
    for(j=k+1;j<=n;j++)
    {
        if(a[j]%k==0)
        a[j]=1;
    }
}

int main()
{
    int p;
    scanf("%d",&p);
 
    int a[100];
    a[0]=0;
    for(int i=1;i<=p;i++)
    a[i]=i;

   for(int y=2;y*y<=p;y++)
   {

       prime(a,p,y);
   }
   for(int h=1;h<p+1;h++)
  {
     if(a[h]!=1)
        printf("%d ",a[h]+a[h+1]);
  }

  return 0;
}