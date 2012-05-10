#include <stdio.h>
char str[2000];
int t,n;
void ok()
{
	int i=0,j=0;
	while(j<n)
	{
      if(str[j]=='<')
				i--;
			else
				i++;
			j++;
			if(i<0)break;
	}
	if(i==0)
		printf("legal\n");
	else
		printf("illegal\n");
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%s",str);
		ok();
	}
	return 0;
}
