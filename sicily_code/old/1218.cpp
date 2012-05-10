#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
struct Interval{
	int a,b;
	Interval(int x=0,int y=0):a(x),b(y){}
} interval;
vector<Interval> ans;
int N,M;
int c;
void find(int x)
{  
	for(int i=0;i<=sqrt(2.0)*sqrt((double)M);i++)
	{
		int start = (2*M/(i+1)-i)/2;
		if(start>=1&&(i+1)*(2*start+i)/2==M&&start+i<=N)
		{
			ans.push_back(Interval(start,start+i));
		}
	}

}
bool cmp(Interval a,Interval b)
{
	return a.a<b.a;
}
int main()
{
	cin >> N >> M;
	find(M);
	sort(ans.begin(),ans.end(),cmp);
	for(int i=0;i<ans.size();i++)
	{
		cout << "["<<ans[i].a<<","<<ans[i].b<<"]"<<endl;
	}
}
	
