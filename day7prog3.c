#include<stdio.h>
int main(void)
{
	int x,y,d,z,k=0,t,i,j,n;
	float m;
	int arr[5][7];
	float arrav[5];
	/*feeding data*/
	for(i=0;i<5;i++)
	{
		for(j=0;j<7;j++)
		{
			printf("enter max. temp. for city%d for day%d ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	/*printing the table*/
	for(z=0;z<5;z++)
	{
		printf("city%d ",z+1);
		for(t=0;t<7;t++)
		{
			
			printf("%d ",arr[z][t]);
		}
		printf("\n");
	}
	/*finding average*/
	for(x=0;x<5;x++)
	{
		d=0;
		for(y=0;y<7;y++)
		{
			d=d+arr[x][y];
		}
		m=d/7;
		arrav[k]=m;
		k=k+1;
		printf("average temp. for city%d is %f\n",x+1,m);
		
	}
	
}