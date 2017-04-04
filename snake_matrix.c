#include <stdio.h>
int main()
{
 int n,num,x,y,k=0,i,j,plus=0;
 scanf("%d",&n);
 num=n*n;
 x=n-1;
 y=n;
 int a[n][n];
 
    while(num!=0) //上下左右四个for，k++的情况有两个：第一个是下面那行打完，要占左边列的一个数，还有就是第三个for（下左上后）结束后每行或列的个数会少一个
   {
   
     for(i=n-k;i>0&&num!=0;i--)
     {
      y--;
      a[x][y]=num;
      num--;
  }
  k++;
  for(j=n-k;j>0&&num!=0;j--)
  {   x--;
   a[x][y]=num;
      num--;
  }
  for(i=n-k;i>0&&num!=0;i--)
  {   y++;
   a[x][y]=num;
      num--;
  }
  k++;
   for(j=n-k;j>0&&num!=0;j--)
  {   x++;
   a[x][y]=num;
      num--;
  }
 
    }

    //输出和求和
    for(x=0;x<n;x++)
      {
   for(y=0;y<n;y++)
        {
  printf("%d ",a[x][y]);
  if(x==y||x+y==n-1)
    plus+=a[x][y];
  }
   printf("\n"); 
  
   }
 printf("%d",plus);  
   return 0;
}