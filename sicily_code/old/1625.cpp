#include <iostream>
#include <string>
#include <bitset>
using namespace std;
string str;
int testcase;
bitset<6> bittime[3];
int main()
{
	cin >> testcase;
	for(int i=1;i<=testcase;i++)
	{
		cout << i <<" ";
		cin >> str;
		for(int i=0;i<8;i+=3)
		{
			int temp=0;
			temp=(str[i]-'0')*10+str[i+1]-'0';
			bittime[i/3]=bitset<6>(temp);
		}
		for(int i=5;i>=0;i--)
		{
			cout << bittime[0][i] <<bittime[1][i]<<bittime[2][i];
		}
		cout <<" "<<bittime[0]<<bittime[1]<<bittime[2]<<endl;
	}
}
