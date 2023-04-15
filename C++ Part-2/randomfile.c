#include<stdio.h>
int main()
{
	int n1,n2,n3;
	scanf("%d",n1);
	scanf("%d",n2);
	scanf("%d",n3);
	int m1[n1][n2];
	int m2[n2][n3];
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			scanf("%d",m1[i][j]);
		}
	}
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<n3;j++)
		{
			scanf("%d",m2[i][j]);
		}
	}
	int ans[n1][n3];
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n3;j++)
		{
			ans[i][j]=0;
		}
	}
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n3;j++)
		{
			for(int k=0;k<n2;k++)
			{
				ans[i][j] += m1[i][k]*m2[k][j];
			}
		}
	}
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n3;j++)
		{
			printf("answer is =",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
