#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter number of elements");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter %d element",i);
		scanf("%d",&arr[i]);
	}
	int j;
	printf("1D array:");
	for(j=0;j<n;j++){
		printf("%d",arr[j]);
	}
	return 0;
}
