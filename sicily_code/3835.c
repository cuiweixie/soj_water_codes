#include	<stdio.h>
#include	<math.h>
double len,pos[6];
double cal(double x1,double y1,double x2,double y2)
{
#define sqr(a) ((a)*(a))
  return sqrt(sqr(x1-x2)+sqr(y1-y2));
}
int main()
{
	int c;
	scanf("%d",&c);
	while(c--)
	{
		int i=0;
		for(;i<6;i++)scanf("%lf",&pos[i]);
		len=0;
		int j=0;
		for(i=0;i<2;i++)
		{
			len+=cal(pos[j],pos[j+1],pos[j+2],pos[j+3]);
			j+=2;
		}
			len+=cal(pos[j],pos[j+1],pos[0],pos[1]);
			printf("%.5f\n",len);
	}
	return 0;
}
