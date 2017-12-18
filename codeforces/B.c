#include<stdio.h>
#include<math.h>
int main()
{
	int R,d,n,i,count=0;
	scanf("%d %d",&R,&d);
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		int x,y,r;
		scanf("%d %d %d",&x,&y,&r);
		float d1,d2;
		
		if(sqrt(x*x+y*y)>=(R+r-d) && sqrt(x*x+y*y)<=(R-r))
		count++;
		
	}
	printf("%d\n",count);
	return 0;
}
