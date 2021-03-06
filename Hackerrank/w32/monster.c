#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void printH(int h[],int h_size)
{
	int i;
	
	for(i=0;i<h_size;i++)
	printf("%d ",h[i]);
	
	printf("\n");
}
int cmp(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int getMaxMonsters(int n, int hit, int t, int h_size, int* h)
{
	printH(h,h_size);
    qsort(h, h_size, sizeof(int), cmp);
    printH(h,h_size);
    
    int i,c=0;
    for(i=0;i<h_size;i++)
    {
        int k=(ceil)((float)h[i]/hit);
        
        if(k<=t)
        {
            h[i]=h[i]-k*hit;
            c++;
        }
        printH(h,h_size);
        
        t-=k;
    }
    
    return c;
    // Complete this function
}



int main() {
    int n; 
    int hit; 
    int t; 
    scanf("%d %d %d", &n, &hit, &t);
    int *h = malloc(sizeof(int) * n);
    for(int h_i = 0; h_i < n; h_i++){
       scanf("%d",&h[h_i]);
    }
    int result = getMaxMonsters(n, hit, t,n, h);
    printf("%d\n", result);
    return 0;
}

