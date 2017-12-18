#include<stdio.h>
int main()
{
	int s,v1,v2,t1,t2;
	scanf(" %d %d %d %d %d",&s,&v1,&v2,&t1,&t2);
	
	int fi=s*v1+2*t1;
	int se=s*v2+2*t2;
	
	if(fi==se)
	printf("Friendship\n");
	else if(fi<se)
	printf("First\n");
	else if(fi>se)
	printf("Second\n");
	return 0;
}
