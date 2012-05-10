#include <stdio.h>
#include <string.h>
char str1[3001],str2[3001];
int t;
int c1[3000],c2[3000];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str1);
		scanf("%s",str2);
		memset(c1,0,sizeof(c1));
		memset(c2,0,sizeof(c2));
		int i,lev,ml=-1;
		for(i=0,lev=0;i<strlen(str1);i++)
		{
			if(str1[i]=='0')
			{
				lev++;
				c1[lev]++;
			}
			else
				lev--;
			if(lev>ml)ml=lev;
		}
		for(i=0,lev=0;i<strlen(str2);i++)
		{
			if(str2[i]=='0')
			{
				lev++;
			c2[lev]++;
			}
			else
				lev--;
			if(lev>ml)ml=lev;
		}
    int ok=1;
		for(i=0;i<=ml;i++)
		{
			if(c1[i]!=c2[i])
			{
				ok=0;
				break;
			}
		}
		 if(ok)
			 printf("same\n");
		 else
			 printf("different\n");
	}
	return 0;
}
