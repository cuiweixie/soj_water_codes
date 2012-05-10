#include <stdio.h>
#define N 13*52 
int cards[11][N],nplayer,t;
int last[10];
int figure()
{
	int ok=1;
	int i;
	for(i=0;i<nplayer;i++)
	{
		int kk=0;
		int l=0,r=52;
		while(l<r&&r<N)
		{
			int cc=l,tick=0;
			for(;tick<13;tick++,cc++)
			{
				if(cards[i][l]==tick+1)
				{
          cards[i+1][kk++]=tick+1;
					l++;
				}
				else
				{
					cards[i][r++]=cards[i][l++];
				}
			}
		}
		if(r==N)
		{
			ok=0;
			return ok;
		}
			last[i]=cards[i+1][51];
	}
	return ok;
}
int main()
{
	scanf("%d",&t);
	int i=0;
	while(t--)
	{
		i++;
		printf("Case %d:",i);
		scanf("%d",&nplayer);
		int k;
		for(k=0;k<52;k++)
			scanf("%d",&cards[0][k]);
		if(figure())
		{
			int j=0;
			for(;j<nplayer;j++)printf(" %d",last[j]);
		}
		else
			printf(" unwinnable");
		printf("\n");
	}
	return 0;
}
