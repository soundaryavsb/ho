#include <stdio.h>

int main(void) {
	 int dhor,hor1,hor2,dmin,min3,min4,min2,min1;
	scanf("%d%d%d%d",&hor1,&min1,&hor2,&min2);
	dhor=hor2-hor1;
	min3=dhor*60;
	dmin=(min2-min1);
	min4=min3+dmin;
	printf("%d %d",(min4/60),(min4%60));
           
		return 0;
}
