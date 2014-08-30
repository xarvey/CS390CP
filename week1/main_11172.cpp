#include<stdio.h>

int main()
{
	int n,m1,m2;
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		scanf("%d %d",&m1,&m2);
		if (m1<m2) printf("<\n");
		if (m1>m2) printf(">\n");
		if (m1==m2) printf("=\n");
	}	


}