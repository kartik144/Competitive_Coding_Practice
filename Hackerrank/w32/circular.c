#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int getMax(int s,int R[],int n)
{
	int i,max=-1;
	
	for(i=1;i<=R[s];i++)
	{
			if(R[(i+s)%n]>max)
			max=(s+i)%n;
	 		if(R[(s-i+n)%n]>max)
	 		max=(s+i-n)%n;
	}
	
	return max;
}
int getResult(int R[],int n,int s,int t)
{
	if(s==t)
	return 0;
	
	if(R[s]==0)
	return INT_MIN;
	
	if((R[s]+s)%n>=t || (s-R[s]+n)%n<=t)
	return 1;
	
	int i=getMax(s,R,n);
	
	return 1+getResult(R,n,i,t); 
}
int circularWalk(int n, int s, int t, int r_0, int g, int seed, int p)
{
	int R[n],i;
	R[0]=r_0;
    
    for(i=1;i<n;i++)
    R[i]=(R[i-1]*g+seed)%p;
    
    return getResult(R,n,s,t);
    
    // Complete this function
}

int main() {
    int n; 
    int s; 
    int t; 
    scanf("%d %d %d", &n, &s, &t);
    int r_0; 
    int g; 
    int seed; 
    int p; 
    scanf("%d %d %d %d", &r_0, &g, &seed, &p);
    int result = circularWalk(n, s, t, r_0, g, seed, p);
    printf("%d\n", result);
    return 0;
}
