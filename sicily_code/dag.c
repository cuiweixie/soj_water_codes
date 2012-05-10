#include <stdio.h>
#include <string.h>
int n,m;
int a[100];
int l,r;
int find_father(int n)
{
	if(a[n]==-1) return n;
	else
		return find_father(a[n]);
}
void add(int l,int r)
{
	a[l]=r;
}
int main()
{
	scanf("%d %d",&n,&m);
  memset(a,-1,sizeof(a));
	int i;
	int tag=1;
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&l,&r);
		l--,r--;
		int rl=find_father(r);
		if(rl==l)
		{
			printf("0\n");
			tag=0;
		}
		add(l,r);
	}
	if(tag)
		printf("1\n");
	return 0;
}
