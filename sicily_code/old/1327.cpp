#include <iostream>
#include <cstring>
using namespace std;
int f_n=1,f_n_1=1,f_n_2=0;
int sum[250]={0};
bool ans[250]={0};
void cal()
{
	sum[1]=1;
	for(int i=2;i<250&&sum[i]<1000000000;i++)
	{
		f_n=f_n_1+f_n_2;
		sum[i]=sum[i-1]+f_n;
		f_n_2=f_n_1;
		f_n_1=f_n;
	}
}

	void get_pinary(int num)
	{
		if(num==0) return;
		else
		{
			int i=0;
			for(int j=1;j<200;j++)
			{
				if(sum[j]>=num&&sum[j-1]<num)
				{
					i=j;
					break;
				}
			}
		   ans[i]=true;
		   get_pinary(num-sum[i-1]-1);
		}
	}

	void output()
	{
	    int j=199;
		for( ;j>=1;j--)
		{
			if(ans[j]==1) break;
		}
		for(  ;j>=1;j--)
			cout << ans[j];
		cout << endl;
	}
	int main()
	{
		int num;
		cal();
		int casetest;cin >> casetest;
		while(casetest--)
		{
			cin >> num;
			memset(ans,0,sizeof(ans));;
			get_pinary(num);
			output();
		}
	}
