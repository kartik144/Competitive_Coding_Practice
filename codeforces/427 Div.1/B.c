#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void* a,const void *b)
{
	return (*(char*)a-*(char*)b);
}
int main()
{
	int k,l,sum=0,c=0,i;
	char s[100000];
	
	scanf(" %d ",&k);
	gets(s);
	l=strlen(s);
	
	for(i=0;i<l;i++)
	sum+=(int)s[i]-48;
	
	qsort(s,l,sizeof(char),cmp);
	//puts(s);
	
	if(sum<k)
	{
		for(i=0;i<l;i++)
		{
			//printf("%d %d\n",c,sum);
			if((k-sum)<=(9-((int)s[i]-48)))
			sum+=k-sum;
			else
			sum+=9-((int)s[i]-48);
			
			c++;
			
			if(sum==k)
			break;
		}
	}
	
	printf("%d\n",c);
	
	return 0;
}
