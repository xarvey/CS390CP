#include<stdio.h>

int main()
{
	int n,x,y;
	while (1)
	{
	scanf("%d",&n);
	if (n==0) return 0;
	scanf("%d %d",&x,&y);
	int x1,y1;
	for (int i=0; i<n; i++)
	{
		scanf("%d %d",&x1,&y1);
		x1-=x;
		y1-=y;
		if ((x1==0) || (y1==0)) printf("divisa\n");
		if ((x1>0) && (y1>0)) printf("NE\n");
		if ((x1<0) && (y1>0)) printf("NO\n");
		if ((x1<0) && (y1<0)) printf("SO\n");
		if ((x1>0) && (y1<0)) printf("SE\n");
	}	
	}

}