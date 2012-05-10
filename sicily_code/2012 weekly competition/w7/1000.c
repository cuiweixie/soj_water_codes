#include <stdio.h>
#include <string.h>
int ia,ib,n,m;
char a[500],b[500];
char g[500][500];
int main()
{
	scanf("%s%s",a,b);
	n=strlen(a);
	m=strlen(b);
	for(ia=0;ia<n;ia++)
		for(ib=0;ib<m;ib++)
		{
			if(a[ia]==b[ib])
				goto out;
		}
out:
memset(g,'.',sizeof(g));
int i;
for(i=0;i<n;i++)
	g[ib][i]=a[i];
for(i=0;i<m;i++)
	g[i][ia]=b[i];
int j;
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
		printf("%c",g[i][j]);
	printf("\n");
}
return 0;
}
