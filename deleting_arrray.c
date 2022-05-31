#include<stdio.h>
main()
{
	int array[10],position,i,n;
	printf("enter n");
	scanf("%d",&n);
	printf("enter %d",n);
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	printf("enter position");
	scanf("%d",&position);
	if(position>=n+1)
	printf("deletion not possible");
	else
	{
		for(i=position-1;i<n-1;i++)
		array[i]=array[i+1];
		printf("resultant array is");
		for(i=0;i<n-1;i++)
		printf("%d",array[i]);
	}
	
}


/* Output

enter n 4
1 2 3 4
enter position 3
1 2 4

*/
