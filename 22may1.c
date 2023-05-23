#include<stdio.h>

int main()
{
	int a[100];
	int n,i;
	printf("enter size of arrey:-");
	scanf("%d",&n);
	printf("enter arrey elements:-\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter arrey elements:-\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
}
