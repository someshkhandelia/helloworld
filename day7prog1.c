#include<stdio.h>
int main(void)
{
	int i,j,k,a,b,c,r,x,y,z,d,m,n,p,q;
	printf("enter the number of rows");
	scanf("%d",&r);
	printf("enter the number of columns");
	scanf("%d",&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(a=0;a<r;a++)
	{
		for(b=0;b<c;b++)
		{
			printf("%d ",arr[a][b]);
		}
		printf("\n");
	}
	for(x=0;x<r;x++)
	{
		d=0;
		for(y=0;y<c;y++)
		{
			d=d+(arr[x][y]*arr[x][y]);
			
		}
		if(d==1)
		k=0;
		if(d!=1)
		k=1;
	}
	for(m=0;m<r;m++)
	{
		for(z=(m+1);z<r;z++)
		{
			q=0;
			for(n=0;n<c;n++)
			{
				q=q+(arr[m][n]*arr[z][n]);
			}
			if(q==0)
			p=0;
			if(q!=0)
			p=1;
			
		}
	}
	if(k==0&&p==0)
	printf("orthogonal");
	else
	printf("not orthogonal");
	return 0;
}