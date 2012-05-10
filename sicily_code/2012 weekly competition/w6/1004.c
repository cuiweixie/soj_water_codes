#include <stdio.h>
#define LEFT 0
#define VAL  1
struct node {
	int type;
long long	int val;
}node[100000];
int sp=0;
int n,a;
int main()
{
	scanf("%d",&n);
	node[0].type=VAL;
	node[0].val=0;
	while(n--)
	{
     scanf("%d",&a);
		 if(a==0)
		 {
			 sp++;
			 node[sp].type=LEFT;
			 node[sp].val=0;	
		 }
		 else
		 {
			 if(node[sp].type==LEFT)
			 {
				 node[sp].type=VAL;
				 node[sp].val=1;
			 }
			 else
			 {
				 int i=sp;
				 while(node[sp].type!=LEFT)sp--;
				 node[sp].val=0;
				 node[sp].type=VAL;
				 int j;
				 for(j=sp+1;j<=i;j++)
				 {
					 node[sp].val+=((node[j].val%12345678910)*2)%12345678910;
					 node[sp].val%=12345678910;
				 }
			 }
		 }
	}
long long	int ret=0;
	while(sp>0)
	{
		ret+=node[sp--].val%12345678910;
		ret=ret%12345678910;
	}
	printf("%lld\n",ret);
	return 0;
}
