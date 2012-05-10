#include <iostream>
#include <bitset>
#include <algorithm>
#include <iomanip>
using namespace std;
int a[2000];
bool cmp(int a,int b)
{
	if(bitset<32>(a).count()==bitset<32>(b).count()) return a<b;
	return bitset<32>(a).count()<bitset<32>(b).count();
}

int main()
{
	for(int i=1;i<201;i++)
		a[i]=i;
	sort(a+1,a+201,cmp);
	for(int i=1;i<201;i++)
	{
		if((i-1)%10==0)cout << endl;
		cout << setw(7)<< a[i]<<"  Binary is: "<<bitset<32>(a[i]) <<" "<<bitset<32>(a[i]).count()<<endl;
	}
	bitset<32> bi1(1);bitset<32>bi2(1);bitset<32>bi3(3);
	cout <<bitset<32>(-10)<<endl;
	
}