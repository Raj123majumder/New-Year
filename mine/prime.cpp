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
    int n;
    scanf("%d",&n);
 
    int a[100];
    a[0]=0;
    for(int i=1;i<=n;i++)
    a[i]=i;

   for(int y=2;y*y<=n;y++)
   {

       prime(a,n,y);
   }
   for(int h=1;h<n+1;h++)
  {
     // if(a[h]!=1)
        printf("%d ",a[h]);
  }

  return 0;
}