#include<stdio.h>
main()
{
  display();
  display();
  }
display()
{
  static int c=1;
  c+5;
  printf("%d",c);
}
