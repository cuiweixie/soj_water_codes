
#include	<stdio.h>
int main()
{
	int t,m;
	float score;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&m);
		int tmp,i,max=0,min=100;
		score=0;
		for(i=0;i<m;i++)
		{
			scanf("%d",&tmp);
			score+=tmp;
			max=max>tmp?max:tmp;
			min=min<tmp?min:tmp;
		}
		score-=max+min;
		score/=m-2;
		printf("%.2f\n",score);
	}
	return 0;
}
