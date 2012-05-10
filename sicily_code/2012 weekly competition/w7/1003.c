#include <stdio.h>
#include <string.h>
unsigned long long int m[26][26];
int n;
char str[11];
int len;
unsigned long long int s2[26][26];
unsigned long long int count(int i,int j)
{
	int k=0;
	unsigned long long int ret=0;
	int l;
	for(k=0;k<26;k++)
		for(l=0;l<26;l++)
	{
		if(l==k)
		{
			if(m[i][k]>1&&m[k][j]>1)
				ret+=m[i][k]*m[k][j]*(m[i][k]-1)*(m[k][j]-1);
		}
		else
		ret+=m[i][k]*m[k][j]*m[i][l]*m[l][j];
	}
	return ret;
}
unsigned long long int figure()
{
	int i,j;
	unsigned long long int ret=0;
	for(i=0;i<26;i++)
		for(j=0;j<26;j++)
		{
			s2[i][j]=count(i,j);
			ret+=s2[i][j];
		}
	return ret;
}
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",str);
		len=strlen(str);
		m[str[0]-'A'][str[len-1]-'A']++;
	}
   unsigned long long int ans=figure();
		 printf("%lld\n",ans);
	return 0;
}
