#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k,f;
	scanf("%d ",&n);
	
	for(i=1;i<=n;i++)
	{
		char s[1001];
		char temp;
		fgets(s,1001,stdin);
		int l=strlen(s)-1;
		printf("Case #%d: ",i);
		
		for(j=0,k=l-1;j<k;j++,k--)
		{
			temp=s[j];
			s[j]=s[k];
			s[k]=temp;
		}
		//puts(s);
		
		for(j=0;j<l;j++)
		{
			k=j+1;
			while(k<l && s[k]!=' ')
			k++;
			
			for(f=k-1;f>=j;f--)
			{
				printf("%c",s[f]);
			}
			if(k!=l)
			printf(" ");
			j=k;
		}
		
		printf("\n");
	}
	return 0;
}
