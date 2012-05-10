#include <stdio.h>
#include <stdlib.h>
#define N 1000000000
int main()
{
	int *a=malloc(N);
	a[2]=22;
	return 0;
}
