#include <iostream>
#include <string>
using namespace std;
bool is_vowel(int ch)
{
	switch(ch)
	{
	case('a'): return true;
	case('e'): return true;
	case('i'): return true;
	case('o'): return true;
	case('u'): return true;
	default:
	return false;
	}
}

string str;
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		cin >> str;
		if(is_vowel(str[0])) 
		{
			str = str+"cow";
			cout << str << endl;
		}
		else
		{
			char ch = str[0];
			for(int i=1;i<str.length();i++)
				cout<<str[i];
			cout << ch <<"ow"<<endl;
		}
	}
}
