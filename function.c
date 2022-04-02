#include<stdio.h>
main()
{
  int p,t,r,s;
  p=40,t=60,r=5;
  s=simple_interest(p,t,r);
  print("%d",s);
}
int simple_interest(int a, int b, int c)
{
  int k;
  k=(a*b*c)/100;
  return(k);
}
