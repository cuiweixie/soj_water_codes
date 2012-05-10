#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	bitset<32> bi1,bi2; int num;
	for(int i=1;i<1000;i++)
	{
		bi1= bitset<32>(i);bi2 =bitset<32>(-1*i);num =i&(-1*i);
		cout << bi1 <<"\t"<<bi2 <<"\t"<<(bi1&bi2) << "\t"<<num << endl;
	}
}