#include <stdio.h>
void myswap( int*a, int*b )
{
  int tmp=*a;
  *a=*b;
  *b=tmp;
}    
int main()
{
	int a,b;
	myswap(&a,&b);
	return 0;
}
