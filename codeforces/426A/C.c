#include<stdio.h>
int gcd(int a,int b)
{
	int l=a<b?a:b;
	int g=a>=b?a:b;
	
	while(l!=1)
	{
		int r=g%l;
		g=l;
		l=r;
	}
}
int main()
{
	int n;
	scanf(" %d ",&n);
	
	while(n--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		
		while(!(a==1 && b==1))
		{
			int k=gcd(a,b);
			
			int l=a<b?a:b;
			int g=a>=b?a:b;
			
			if(g%k*k!=0 || l%)
		}
	}
	return 0;
}
