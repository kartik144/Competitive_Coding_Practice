#include<stdio.h>
void getT(int t[],int s[],int l)
{
	int i=0;
	for(i=0;i<l;i++)
	t[i]=(s[i]+1)%2;
}
/*void getStr(int s[],int t[],int str,int l)
{
	int i,len=l;
	for(i=0;i<l;i++)
	str[i]=s[i];
	
	for(i=0;i<l;i++)
	str[len+i]=t[i];
}*/
void printS(int s[],int l)
{
	int i;
	for(i=0;i<l;i++)
	printf("%d",s[i]);
	
	printf("\n");
}
void getS(int s[],int t[],int l)
{
	int i;
	for(i=l/2;i<l;i++)
	s[i]=t[i-l/2];
}
void generate(int s[2000])
{
	int t[2000],l=1;
	s[0]=0;

	while(l<1000)
	{
		getT(t,s,l);
		//printS(s,l);
		//printf("\t");
		//printS(t,l);
		l=l*2;
		getS(s,t,l);
	}
}


int main()
{
	int t=0,k;
	int s[2000];
	generate(s);
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d",&k);
		
		printf("%d\n",s[k]);
	}
	return 0;
}

