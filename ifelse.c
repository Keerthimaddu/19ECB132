#include<stdio.h>
main()
{
  int i,n;
  printf("enter n");
  scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     if(i%2!=0)
     {
       printf("odd+%d",i);
     }
     printf("enter n=%d",i);
   }
