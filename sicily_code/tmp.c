#include <stdio.h>
int main()
{
	int i;
	for(i=1;i<10;i++)
		printf("%d mod 4 rem %d d: %d\n",-i,(-i)%4,(-i)/4);
	return 0;
}
