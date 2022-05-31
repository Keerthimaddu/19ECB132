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
       printf("%d",i);
     }
     printf(" ");
   }
}


/* Output

enter n 14
1 3 5 7 9 11 13

*/
