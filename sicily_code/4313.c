#include <stdio.h>
#include <string.h>
#define N 1002
int t,m[N][N],n,m_x[N],m_y[N],fs[N];
int cc;
int find_match(int x)
{
	int i=0;
	if(fs[x]==0)
	{
		fs[x]=1;
		for(i=0;i<n;i++)
		{
			if(m[x][i]&&(m_y[i]==-1||find_match(m_y[i])))
			{
				m_y[i]=x;
				return 1;
			}
		}
	}
	return 0;
}
void km()
{
	int i=0;
	cc=0;
	memset(m_y,-1,sizeof(m_y));
	for(i=0;i<n;i++)
	{
		memset(fs,0,sizeof(fs));
		if(find_match(i))
			cc++;
	}
}
int ok(int x,int y)
{
#define abs(x) ((x)>0?(x):-(x))
	if(x*y<0)
	{
		if(x<0)return -x-y>0;
		else
			return  x+y<0;
	}
	return 0;
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int x[N],y[N],i;
		for(i=0;i<n;i++)
			scanf("%d",&x[i]);
		for(i=0;i<n;i++)
			scanf("%d",&y[i]);
		int j;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				m[i][j]=ok(x[i],y[j]);
		km();
		printf("%d\n",cc);
	}
	return 0;
}
