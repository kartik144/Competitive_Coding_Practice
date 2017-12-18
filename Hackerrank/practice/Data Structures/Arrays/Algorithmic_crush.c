#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {

    int n,m,a,b,k,i,j;
    long long int max;
    scanf("%d %d",&n,&m);
    long long int arr[n];
    
    for(i=0;i<n;i++)
        arr[i]=0;
    
    for(j=0;j<m;j++)
    {
        scanf("%d %d %d",&a,&b,&k);
        
        for(i=a-1;i<b;i++)
            arr[i]+=k;
    }    
    
    max=arr[0];
    for(i=1;i<n;i++)
        if(arr[i]>max)
            max=arr[i];
    
    printf("%lld\n",max);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
