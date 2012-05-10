#include <iostream>
#include <vector>
using namespace std;
int n,m;
int main()
{
	cin >> n>>m;
	vector<int> A,B;
	for(int i=1;i<=n;i++)
		if(n%i==0)A.push_back(i);
	for(int i=1;i<=m;i++)
		if(m%i==0)B.push_back(i);
	for(int i=0;i<A.size();i++)
		for(int j=0;j<B.size();j++)
		cout <<A[i] <<" "<<B[j]<<endl;
}