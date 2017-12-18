#include<stdio.h>
int main()
{
	unsigned long long int n,k;
	scanf("%llu %llu",&n,&k);
	
	unsigned long long int t=n/k;
	
	if(t%2==1)
	printf("YES\n");
	else
	printf("NO\n");
	
	return 0;
}
