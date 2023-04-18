#include<stdio.h>
int main()
{
	int a,i,j;
	printf("enter the value of a=\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d",i+j-1);
		}
	}
	return 0;
}
