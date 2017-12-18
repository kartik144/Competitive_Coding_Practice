#include<stdio.h>
#include<string.h>
int arr[2500][2500];
int main()
{
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	
	//int arr[250][250];
	
	for(i=0;i<2500;i++)
	for(j=0;j<2500;j++)
	arr[i][j]=0;
	
	for(i=0;i<n;i++)
	{
		char s[2500];
		scanf(" %s",s);
		for(j=0;j<m;j++)
		arr[i][j]=(int)s[j]-48;	
	}
	
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		printf("%d ",arr[i][j]);
		printf("\n");
	}*/
	
	
}
