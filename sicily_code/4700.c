
#include	<stdio.h>
int max[4],t,n;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
	max[1]=max[2]=max[3]=0;
	scanf("%d",&n);
	int kind,value;
	while(n--){
	scanf("%d%d",&kind,&value);
	max[kind]=max[kind]>value?max[kind]:value;
	}
	int i;
	for(i=1;i<4;i++)
	{
		if(max[i]!=0)printf("%d %d\n",i,max[i]);
	}
	}
	return 0;
}
