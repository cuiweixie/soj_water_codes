#include <iostream>
#include <string>
#include <bitset>
using namespace std;

string str1;
bitset<32> bits;
int main()
{
	while(cin >> str1)
	{
		if(str1=="#")
			return 0;
	 bits=bitset<32>(str1,0,str1.length()-1);
	 for(int i=0;i<str1.length()-1;i++)
		 cout << str1[i];
	 if(str1[str1.length()-1]=='e')
	 {
		 if(bits.count()%2==0)
			 cout <<"0"<<endl;
		 else
			 cout <<"1"<<endl;
	 }
	 else
	 {
		 if(bits.count()%2==0)
			 cout << "1"<<endl;
		 else 
			 cout << "0"<<endl;
	 }
	}
}