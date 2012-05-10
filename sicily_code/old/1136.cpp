#include <iostream>
using namespace std;

int high[100001];
int n,m;
class best{
public:
	int start,end;
	int big;
	best(){start = end = 0; big = 0xFFFFFFFF;
	}
	best(int m){start = end = m;big = 0xFFFFFFFF;
	}
};

int a,b;

void answer(int a,int b);

int main()
{
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> high[i];
	for(int i=1;i<=m;i++)
	{
		cin >> a >> b;
		answer(a,b);
	}
}

void answer(int a,int b)
{
	 best ans;
	best *arr= new best[b-a+2];arr[0].start=a;
	for(int i=a,j =1;i<= b;i++,j++)
	{
		if(high[i] >arr[j-1].big+high[i])
		{
			arr[j].big = high[i];
			arr[j].start = arr[j].end = i;
		}
		else{
			arr[j].big = arr[j-1].big + high[i];
			arr[j].start = arr[j-1].start;
			arr[j].end = i;
		}
	}
	ans = arr[1];
	for(int i=2;i<=b-a+1;i++)
	{
		if(ans.big < arr[i].big) ans = arr[i];
	}
	delete []arr;
	cout << ans.start <<" " << ans.end <<" "<< ans.big << endl;
}
