#include <stdio.h>
int main(void) {
	int n,k,i,t;
	int a[10];
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d ",&n,&k);
	    for(i=0;i<n;i++)
	        a[i]=i+1;
	    int temp = a[k];
	    a[k]=a[n-1];
	    a[n-1]=temp;
	    for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n");
    }
	return 0;
}
