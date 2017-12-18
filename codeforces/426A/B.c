#include<stdio.h>
#include<string.h>
int main()
{
	int n,k,flag=1;
	scanf(" %d %d ",&n,&k);
	char s[n+1];
	
	gets(s);
	
	int l[26],g[26];
	int i;
	
	for(i=0;i<26;i++)
	{
		l[i]=-1;
		g[i]=0;
	}
	
	for(i=0;i<n;i++)
	l[(int)s[i]-65]=i;
	
	/*for(i=0;i<26;i++)
	printf("%c %d\n",(char)i+65,l[i]);	*/
	
	for(i=0;i<n;i++)
	{
		if(g[(int)(s[i])-65]==0)
		{
			g[(int)(s[i])-65]=1;
			k--;
		}
		
		if(k<0)
		{
			flag=0;
			//printf("%d\n",k);
			break;
		}
		
		if(i==l[(int)(s[i])-65])
		k++;
	}
	
	if(flag==1)
	printf("NO\n");
	else
	printf("YES\n");
	
	return 0;
}
