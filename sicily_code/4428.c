
#include	<stdio.h>
int cmb[11][11];
int main()
{
	int i;
	for(i=0;i<11;i++)cmb[i][0]=cmb[i][i]=1;
	int j;
	for(i=1,j=0;i<11;i++)
		for(j=1;j<i;j++)
			cmb[i][j]=cmb[i-1][j-1]+cmb[i-1][j];
	int m,n;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		printf("%d\n",cmb[n][m]);
	}
	return 0;
}
