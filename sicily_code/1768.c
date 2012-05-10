#include <stdio.h>
#define N 1001
int sa[N],sb[N],spa,spb;
int arr[N],n;
char op[N*10]; int opi;
int push(int key)
{
	if(spa==0){
  sa[spa++]=key;
	op[opi++]='a';
	return 1;
	}
	else{
		if(sa[spa-1]>key){
			sa[spa++]=key;
			op[opi++]='a';
			return 1;
		}
		else
		{
			/* push to stack 2 */
			if(spb==0)
			{
				sb[spb++]=key;
				op[opi++]='c';
				return 1;
			}
			else {
				if(sb[spb-1]>key)
				{
					sb[spb++]=key;
					op[opi++]='c';
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
}
int pop(int key)
{
	if(spa!=0&&sa[spa-1]==key)
	{
		op[opi++]='b';
		spa--;
		return 1;
	}
	if(spb!=0&&sb[spb-1]==key)
	{
		op[opi++]='d';
		spb--;
		return 1;
	}
	return 0;
}
int map[N],in_i,i;
int main()
{
  while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&arr[i]);
			map[arr[i]]=i;
		}
		spa=spb=opi=0;
		in_i=1;
		int state=1;
		for(i=1;i<=n;i++)
		{
      while(!pop(i))
			{
				if(!push(arr[in_i++]))
				{
					state=0;
					goto out;
				}
			}
		}
out:
		if(state)
		{
			printf("%c",op[0]);
			for(i=1;i<opi;i++)
				printf(" %c",op[i]);
			printf("\n");
		}
		else
			printf("0\n");
	}
	return 0;
}
