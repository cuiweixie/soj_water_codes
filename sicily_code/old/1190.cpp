#include <iostream>
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;
int SIN[300];
int G;
bool can_used[45000];
set<int> diff;
void initialized()
{
	cin>>G;
	diff.clear();
	memset(can_used,1,sizeof(can_used));
	for(int i=0;i<G;i++)
	  cin >> SIN[i];
	for(int i=0;i<G;i++)
	   for(int j=0;j<G;j++)
	   {
		   int temp = SIN[i]-SIN[j];
		   if(temp >=G)diff.insert(temp);
	   }
}
int get_m()
{
	if(G==1) return 1;
	set<int>::iterator ite;
	for(int i=G;i<45000;i++)
	{
       ite = diff.lower_bound (i);
	   while(ite!=diff.end())
	   {
		   if(*ite++%i==0) goto out;
	   }
	   return i;
out:;
	}
	return -1;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		initialized();
		cout << get_m() << endl;
	}
}


