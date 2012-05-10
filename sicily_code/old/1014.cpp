#include <iostream>
using namespace std;
bool is_equal_in_bt(int n)
{
	int dex = n;
	int a1=0,a2=0,a3=0;
	while(dex!=0)
	{
		a1=a1+dex%10;
		dex/=10;
	}
	int doc=n;
	while(doc!=0)
	{
		a2+=doc%12;
		doc/=12;
	}
	int hex=n;
	while(hex!=0)
	{
		a3=a3+hex%16;
		hex/=16;
	}
	if(a1==a2&&a2==a3)return true;
	else return false;
}

int main()
{
	for(int i=1000;i<10000;i++)
	{
		if(is_equal_in_bt(i))
			cout << i<<endl;
	}
	
}