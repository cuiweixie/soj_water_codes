#include <string.h>
#include	<stdio.h>
int main()
{
	int t,n=0;
	char s[32];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
	  n=0;
		int i=0;
		while(s[i]!='\0')
		{
			n=(n<<1)+(s[i++]-'0');
		}
		printf("%d\n",n);
	}
	return 0;
}
