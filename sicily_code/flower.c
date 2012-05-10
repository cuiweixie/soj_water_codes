#include <stdio.h>
#define p3(x) ((x)*(x)*(x))
#define p3s(x,y,z) (p3(x)+p3(y)+p3(z))
#define h(x,y,z) (100*(x)+10*(y)+z)
int main()
{
	int i,j,k;
	for(i=1;i<10;i++)
		for(j=0;j<10;j++)
			for(k=0;k<10;k++)
			{
				if(h(i,j,k)==p3s(i,j,k))
					printf("%d\n",h(i,j,k));
			}
	return 0;
}
