#include <stdio.h>
#define n_3(n) ((n)*(n)*(n))
int main()
{
  int a,b,c;
	for(a=1;a<10;a++)
		for(b=0;b<10;b++)
			for(c=0;c<10;c++)
			{
				int tmp=a*100+b*10+c;
				if(tmp==n_3(a)+n_3(b)+n_3(c))
					printf("%d\n",tmp);
			}
	return 0;
}
