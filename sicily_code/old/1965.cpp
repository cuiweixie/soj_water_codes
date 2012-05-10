#include <iostream>
using namespace std;
int a[101];
int test,n;
void done()
{
	int count =0;int min,pos;
	for(int i=0;i<n;i++)
	{ min = a[i];pos=i;
	for(int j=i;j<n;j++)
	{
		if(a[j]<min)
		{
			min=a[j];
			count++;
			pos=j;
		}
	}
	int temp = a[i];
	a[i] = a[pos];
	a[pos] = temp;
	}
	cout << count << endl;
}
int main()
{
	cin >> test;
	while(test--)
	{
		cin >> n;
		for(int i=0;i<n;i++)
			cin >> a[i];
		done();
	}
}
