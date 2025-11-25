#include<stdio.h>
int main()
{
	int i,n,rollno[n];
	
	printf("enter n value ie size of array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter rollno[%d]: ",i);
		scanf("%d",&rollno[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nrollno[%d]:%d",i,rollno[i]);
	}
	return 0;
}
