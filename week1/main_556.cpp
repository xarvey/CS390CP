#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

int main()
{
	int n,m;
	int dirx[4]={1,0,-1,0};
	int diry[4]={0,1,0,-1};
	while (1)
	{
		scanf("%d %d",&n,&m);
		int map[1000][1000];
		for (int i=0; i<1000; i++)
		for (int j=0; j<1000; j++)
			map[i][j]=1;
		getchar();
		for (int i=n; i>=1; i--)
		{
		for (int j=1; j<=m; j++)
		{
			char c=getchar();
			if (c=='0') map[i][j]=0;
			if (c=='1') map[i][j]=1;
		}	
		getchar();
		}
		int nowx=1;
		int nowy=1;
		int visit[1000][1000]={0};
		int currentdir=0;
		while (1)
		{
		if ((map[nowx+dirx[(currentdir-1+4)%4]][nowy+diry[(currentdir-1+4)%4]]==1) && (map[nowx+dirx[currentdir]][nowy+diry[currentdir]])==0)
		{
			nowx+=dirx[currentdir];
			nowy+=diry[currentdir];
			visit[nowx][nowy]++;
			printf("%d %d",map[nowx+dirx[(currentdir-1+4)%4]][nowy+diry[(currentdir-1+4)%4]],map[nowx+dirx[currentdir]][nowy+diry[currentdir]]);
		}
		else
			currentdir=(currentdir+1)%4;
		if ((nowx==1) && (nowy==1))
			break;
		printf("%d %d %d\n",nowx,nowy,currentdir);
		}
		int result[1000]={0};
		for (int i=1; i<=n; i++)
		for (int j=1; j<=m; j++)
		if (map[i][j]==0)
			result[visit[i][j]]++;
		for (int i=0; i<=4; i++)
			printf("%d   ",result[i]);
	}
}