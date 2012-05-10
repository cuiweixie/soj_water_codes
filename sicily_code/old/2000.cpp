#include <iostream>
#include <algorithm>
using namespace std;

struct Toy{
	long long int index;
	long long int j,p;
}toy[25001];
bool cmp(Toy a,Toy b)
{
	return a.j*b.p>a.p*b.j;
}

int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> toy[i].j>>toy[i].p;
		toy[i].index=i;
	}
	sort(toy+1,toy+n+1,cmp);
	long long int sum =toy[1].p+toy[2].p+toy[3].p;
	cout << sum << endl;
	for(int i=1;i<=3;i++)
		cout << toy[i].index << endl;
}
