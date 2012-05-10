#include <stdio.h>
#include <string.h>
#define N 10000
long long int a[4],len;
char str[3];
int main()
{
	while(scanf("%c",&str[0]))
	{
		if(str[0]=='0') return 0;
		a[0]=1;
		a[1]=1;
		a[2]=1;
		while(scanf("%c",&str[1]))
		{
			if(str[1]=='\n')
			{
				printf("%lld\n",a[2]);
				break;
			}
			if(((str[0]=='2'&&str[1]<='6')||str[0]=='1')&&str[1]!='0')
				a[3]=a[2]+a[1];
			else if(str[1]=='0')
				a[3]=a[1];
			else
				a[3]=a[2];
			str[0]=str[1];
			a[0]=a[1],a[1]=a[2],a[2]=a[3];
		}
	}
	return 0;
}
