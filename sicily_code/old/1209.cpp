#include <iostream>
using namespace std;

int id,num;
int N;
int find(int &x)
{
	int count;
	if(x%2==0)count=0;
	else count=1;
	for(int i=2;x/i>=i;i++)
	{
		if(x%i!=0) continue;
		if(i%2!=0)count++;
		if(x/i%2!=0&&x/i!=i)count++;
	}
	return count;
}


int main()
{
	cin >> N;
	while(N--)
	{
		cin >> id >> num;
		cout <<id <<" "<<find(num)<<endl;
	}
}