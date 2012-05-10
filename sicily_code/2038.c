#include	<string.h>
#include	<stdio.h>
void str_reverse(char *str,int i,int j)
{
	while(i<j)
	{
		char tmp=str[i];
		str[i]=str[j];
		str[j]=tmp;
		i++,j--;
	}
}
int main()
{
  int i,j,t;
	char s[101];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		i=j=0;
		int flags=1;
		for(;j<strlen(s);j++)
		{
			if(s[j]=='_')
			{
				str_reverse(s,i,j-1);
				str_reverse(s,j+1,strlen(s)-1);
				flags=0;
				break;
			}
		}
		if(flags)
		{
			str_reverse(s,0,strlen(s)-1);
		}
		printf("%s\n",s);
	}
	return 0;
}
