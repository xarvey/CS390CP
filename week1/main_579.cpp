#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
int main()
{
	int x,y;
	while (1)
	{
	scanf("%d:%d",&x,&y);
	//printf("%d %d\n",x,y);
	if ((x==0) && (y==0)) return 0;
	double a;
	double b;
	a=((double)x+(double)y/60)*360/12;
	b=(double)y*360/60;
	double ans=a-b;
	if (ans<0) ans=0-ans;
	if (ans>180) 
		printf("%.3f\n",360-ans);
		else
		printf("%.3f\n",ans);	
	}

}