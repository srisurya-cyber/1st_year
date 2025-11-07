#include<stdio.h>
int main(){
	int r1,c1,r2,c2;
	int a[100][100],b[100][100];
	printf("enter the rows");
	printf("enter the columns");
	scanf("%d %d",&r1,&c1);
	printf("enter the rows");
	printf("enter the columns");
	scanf("%d %d",&r2,&c2);
	int i,j,k;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	int matrix[100][100];
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			for(k=0;k<c1;k++){
				matrix[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	printf("Resultant matrix:\n");
	for (i = 0; i < r1; i++) {
		for(j=0;j<c2;j++)
		{
			printf("%d",matrix[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
