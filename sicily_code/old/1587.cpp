#include <iostream>
#include <algorithm>
using namespace std;
int N,M;
int A[20000],B[20000];
int cal()
{
	int i=0,j=0,count=0;
	sort(A,A+N);
	sort(B,B+M);
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(A[i]>B[j]) count++;
			else break;
		}
	}
	return count;
}

int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		cin >> N >> M;
		for(int i=0;i<N;i++) cin >> A[i];
		for(int i=0;i<M;i++)cin >> B[i];
		cout << cal() << endl;
	}
}

		