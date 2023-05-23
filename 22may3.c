#include<stdio.h>

int main()
{
	int arr[]={1,2,3,4,5,6};
	int i,sum=0,avg;
	
	for(i=0;i<=5;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of all elements=%d\n",sum);
	avg=sum/6;
	printf("averag=%d",avg);
}
