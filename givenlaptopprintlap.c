#include <stdio.h>

int main(void) {
	char a[20];
	int k;
	scanf("%s%d",a,&k);
	for(int i=0;i<k;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
