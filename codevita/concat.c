#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int s[10000];
	int i,j,c=0,count=0;
	
	for(i=0;i<10000;i++)
	s[i]=1;
	
	s[0]=0,s[1]=0;
	
	for(i=2;i<=10000;i++)
	{
		if(s[i]==1)
		for(j=2*i;j<10000;j+=i)
		s[j]=0;
	}
	
	for(i=0;i<=n;i++)
	if(s[i]==1)
	c++;
	
	//printf("%d %d\n",c,(int)sqrt(10000));
	
	int arr[c];
	j=0;
	for(i=2;i<=n;i++)
	if(s[i]==1)
	{
		//printf("%d\n",j);
		arr[j]=i;
		j++;
	}
	
	//printf("*");
	
	/*for(i=0;i<c;i++)
	printf("%d ",arr[i]);
	printf("\n");*/
	
	for(i=0;i<c;i++)
	for(j=0;j<c;j++)
	{
		int p=0,cop=arr[j];
		int t=arr[i];
		while(cop>0)
		{
			cop=cop/10;
			p++;
			t*=10;
		}
		t+=arr[j];
		if(s[t]==1 && j!=i)
		{
			count++;
			//printf("i=%d j=%d t=%d\n",arr[i],arr[j],t);
		}
	}
	
	for(i=0;i<c;i++)
	{
		int p=0,cop=arr[i];
		int t=arr[i];
		while(cop>0)
		{
			cop=cop/10;
			p++;
			t*=10;
		}
		t+=arr[i];
		if(s[t]==1)
		{
			count++;
			//printf("t=%d\n",t);
		}
	}
	
	
	printf("%d\n",count);
	
	return 0;
}
