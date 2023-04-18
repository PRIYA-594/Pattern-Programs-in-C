#include<stdio.h>
int main()
{
	int a,i,j,k;
	printf("enter the value of a=\n");
	scanf("%d",&a);
	k=1;
	for(i=1;i<=a;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d",k++);
		}
	}
	return 0;
}
