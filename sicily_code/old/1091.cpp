#include <iostream>
#include <cstdio>
using namespace std;

int dp1[50002],dp2[50002],dp3[50002],arr[50001];
int test,n,_max;
const int INF = -2147483647;
int main()
{
	dp1[0] = 0;
	scanf("%d",&test);
	while(test--)
	{
		_max = INF;
		scanf("%d",&n);dp2[n+1] = 0;
		for(int i =1;i<=n;i++)
		{
			scanf("%d",&arr[i]);
			dp1[i] = max(dp1[i-1]+arr[i],arr[i]);
		}
		int temp = INF;
		for(int i=n;i>1;i--)
		{
		   dp2[i] = max(dp2[i+1]+arr[i],arr[i]);
		   if(dp2[i] > temp)
		   {
			   temp = dp2[i];
			   dp3[i] = dp2[i];
		   }
		   else
			   dp3[i] = temp;
		   if(dp3[i] +dp1[i-1] > _max)
			   _max = dp3[i] + dp1[i-1];
		}
		   

		printf("%d\n",_max);
	}
}



		
	

            



