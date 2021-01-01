#include<stdio.h>

void space(int a[],int i,int n,int k)
{
	
	for(int j=5+k;j>=i;j--)
	{
		a[j]=a[j-1];
		a[j-1]=0;
	}
   
}    /*jy*/

void insert(int a[],int x,int y)
{
	
	   a[y-1]=x;
	
}

int main()
{
	int n;
	scanf("%d",&n);
	int b[n][2];
	for(int i=0;i<n;i++)
	{
        scanf("%d %d",&b[i][0],&b[i][1]);
	}
	
	int a[n+5]={2,3,4,5,6};
	for(int j=0;j<n;j++)
      {
      	if((b[j][1]-1)>4+j)
      	  insert(a,b[j][0],b[j][1]);
      	  
      	else
      	   {
      	   	space(a,b[j][1],n,j);
      	   	insert(a,b[j][0],b[j][1]);
			 }
	  }
	  
	  for(int c=0;c<n+5;c++)
	    printf("%d ",a[c]);
}