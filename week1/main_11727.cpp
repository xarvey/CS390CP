#include<stdio.h>

int main()
{
	int n,x,y,z;
	
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		scanf("%d %d %d",&x,&y,&z);
		int max=0;
		int min=99999;
		if (x>max) max=x;
		if (y>max) max=y;
		if (z>max) max=z;
		if (x<min) min=x;
		if (y<min) min=y;
		if (z<min) min=z;
		printf("Case %d: %d\n",i+1,x+y+z-max-min);

	}

}