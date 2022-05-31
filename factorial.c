#include<stdio.h>
main()
{
  int n,f;
  printf("enter n");
  scanf("%d",&n);
  f=fact(n);
  printf("%d",f);
}
int fact(int n)
{
  if(n==1)
    return 1;
  else
    return(n*fact(n-1));
}


/* Output

enter n 4
24

*/
