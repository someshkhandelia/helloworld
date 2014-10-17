#include<stdio.h>
int main(void)
{
	int a,i,j,k=0,x,y,r,c,v,w,z,q=0;
	printf("enter the number of rows");
	scanf("%d",&r);
	printf("enter the number of columns");
	scanf("%d",&c);
	if(r!=c)
	printf("enter the same number of rows and columns since upper triangular or lower triangular is defined for square matrices\n");
	else
	{
	
		int m[r][c];
		printf("enter the elements of the matrix");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&m[i][j]);
			}
		}
			for(v=0;v<r;v++)
		{
			for(w=0;w<c;w++)
			{
				printf("%d ",m[v][w]);
			}
			printf("\n");
		}
		for(x=0;x<r;x++)
		{
			for(y=0;y<c;y++)
			{
				if(x>y)
				{
					if(m[x][y]!=0)
					q=q+1;
					
					
				}
				
				
				if(y>x)
				{
					if(m[x][y]!=0)
					k=k+1;
				}
				
				
			}
		}
		if(q>0)
		printf("not upper triangular\n");
		else
		printf("upper triangular\n");
		if(k>0)
		printf("not lower triangular\n");
		else
		printf("lower triangular\n");
	
	}
	return 0;
}