#include<stdio.h>
int main()
{
	char s[10];
	gets(s);
	int n,cw=0,ccw=0;
	scanf(" %d",&n);
	
	n=n%4;
	
	int in,fi;
	
	switch(s[0])
	{
		case '^':	in=0;
				break;
		case '>':	in=1;
				break;
		case 'v':	in=2;
				break;
		case '<':	in=3;
				break;
					
	}
	
	switch(s[2])
	{
		case '^':	fi=4;
				break;
		case '>':	fi=1;
				break;
		case 'v':	fi=2;
				break;
		case '<':	fi=3;
				break;
					
	}
	
	switch(n)
	{
		case 1:		if(fi-in==1)
				cw=1;
				else
				ccw=1;
				break;
		case 0:
		case 2:		cw=1;
				ccw=1;
				break;
		case 3:		if(fi-in==1)
				ccw=1;
				else
				cw=1;
	}
	
	if(cw==1 && ccw==0)
	printf("cw\n");
	else if(cw==0 && ccw==1)
	printf("ccw\n");
	else
	printf("undefined\n");
	
	return 0;
}
