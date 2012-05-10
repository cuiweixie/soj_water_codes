#include <stdio.h>
int a[20],v[20];
int n;
long long int p[20];
void init()
{
	p[0]=1;
	long long int i=1;
	for(i=1;i<20;i++)
	{
		p[i]=p[i-1]*i;
	}
}
long long int get_cantor()
{
  v[n-1]=0;
	long long int i=1;
	for(i=n-2;i>=0;i--)
	{
		long long int j;
		v[i]=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
				v[i]++;
		}
	}
	long long int j=0;
	long long int ret=0;
  for(i=n-1;i>=0;i--)
	{
    ret+=p[j++]*v[i];
	}
	return ret+1;
}
long long int tag[20];
long long int get_nth(long long int i)
{
	long long int j;
	for(j=0;j<n;j++)
	{
		if(tag[j]==0)break;
	}
	for(;j<n&&i!=0;)
	{
	    if(tag[j]==0){
				i--;
			}
			j++;
	}
	while(tag[j]!=0)j++;
	return j;
}
void get_array(long long int cantor)
{
	long long int i=0;
	long long int j=n-1;
	for(i=0;i<n;i++)
	{
		v[i]=cantor/p[j];
		cantor%=p[j];
		j--;
	}
	for(i=0;i<n;i++)tag[i]=0;
	for(i=0;i<n;i++)
	{
		long long int tmp=get_nth(v[i]);
		a[i]=tmp;
		tag[tmp]=1;
	}
}
int main()
{
 init();
 int k;
 scanf("%d%d",&n,&k);
 while(k--)
 {
	 char ch;
	 scanf("%c",&ch);
	 scanf("%c",&ch);
	 if(ch=='P')
	 {
		 long long int tmp;
		 scanf("%lld",&tmp);
		 get_array(tmp-1);
		 long long int i=0;
		 for(i=0;i<n-1;i++)
			 printf("%d ",a[i]+1);
			 printf("%d\n",a[i]+1);
	 }
	 else
	 {
		 int i;
		 for(i=0;i<n;i++)
			 scanf("%d",&a[i]);
		 printf("%lld\n",get_cantor());
	 }
 }
 return 0;
}
