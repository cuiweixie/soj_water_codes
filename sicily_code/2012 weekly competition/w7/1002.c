#include <stdio.h>
#define N 1000000
int dpa[N],dpb[N],n;
char str[N];
int main()
{
	scanf("%d",&n);
	scanf("%s",str);
	dpa[0]=(str[0]!='A');
	dpb[0]=(str[0]!='B');
	int i;
	for(i=1;str[i]!='\0';i++)
	{
		if(str[i]=='A')
		{
			dpa[i]=dpa[i-1]>dpb[i-1]+1?dpb[i-1]+1:dpa[i-1];
			dpb[i]=dpb[i-1]+1>dpa[i-1]+1?dpa[i-1]+1:dpb[i-1]+1;
		}
		else
		{
			dpb[i]=dpb[i-1]>dpa[i-1]+1?dpa[i-1]+1:dpb[i-1];
			dpa[i]=dpb[i-1]+1>dpa[i-1]+1?dpa[i-1]+1:dpb[i-1]+1;
		}
	}
	printf("%d\n",dpa[i-1]);
	return 0;
}
