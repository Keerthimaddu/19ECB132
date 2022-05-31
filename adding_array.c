#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,pos,size,item;
	printf("enter size of array");
	scanf("%d",&size);
	printf("enter array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter position");
	scanf("%d",&pos);
	printf("enter item");
	scanf("%d",&item);
	for(i=size;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=item;
	size++;
	printf("resultant array elements");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
}


/* Output

enter size of array 5
enter array elements 1 2 3 4 5
enter position 3
enter item 0
1 2 3 0 4 5

*/
