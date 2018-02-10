#include <stdio.h>

int main(void) {
	int fact=1,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d factorial=%d",n,fact);
	return 0;
}
