#include<stdio.h>
int main()
{
	int l,r,x,y,k,i,flag=0;
	scanf("%d %d %d %d %d",&l,&r,&x,&y,&k);
	
	float min=(float)l/y,max=(float)r/x;
	
	if(k>=min && k<=max)
	{	
		for (i=l;i<=r;i++)
		{
			if((float)i/k>=x && (float)i/k<=y && (float)i/k-i/k==0)
			flag=1;
		}
	}
	if(flag)
	printf("YES\n");
	else 
	printf("NO\n");
	return 0;
}
