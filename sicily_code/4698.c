#include <string.h>
#include	<stdio.h>
int list[10000];
int n,m;
int tmp,i;
int main()
{
	memset(list,-1,sizeof(list));
	scanf("%d%d",&n,&m);
	while(n--)
	{
		scanf("%d",&tmp);
		int hk=tmp%m;
		int cc=m;
		for(i=hk;cc>0;i=(i+1)%m,cc--)
		{
			if(list[i]==-1){
				list[i]=tmp;
				break;
			}
		}
	}
	for(i=0;i<m;i++)
		if(list[i]==-1)
			printf("%d#NULL\n",i);
		else
			printf("%d#%d\n",i,list[i]);
	return 0;
}
