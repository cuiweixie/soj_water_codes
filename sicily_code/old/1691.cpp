#include <iostream>
using namespace std;

int test,x,y;
int get_adu(int x)
{
	if(x==1) return -1;
	int temp =0;
	for(int i=1;i<=x;i++)
		if(x%i==0)temp+=i;
	temp-=2*x;
	return temp;
}
void done()
{
	int maxx = -1000000;
	int temp;
	for(int i=x;i<=y;i++)
	{
	     temp = get_adu(i);
		if(maxx<temp)maxx =temp;
	}
	if(maxx<=0) maxx=-1;
	cout<< maxx << endl;
}
int main()
{
	cin >> test;
	while(test--)
	{
		cin >> x >> y;
		done();
	}
}


	