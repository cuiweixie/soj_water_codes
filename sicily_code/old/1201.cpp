#include <iostream>
#include <string>
#include <vector>
#include <bitset>
using namespace std;

string str1,str2;
bitset<81> add1;
bitset<81> add2;
string ans;


void add()
{
	bool carry=0;
	bool co;
	int i=0;
	for(;i<81;i++)
	{
      co = carry&add1[i]|carry&add2[i]|add1[i]&add2[i];
	  add1[i] = add1[i]^add2[i]^carry;
	  carry = co;
	}
    ans = add1.to_string();
}

int find(string str)
{
	for(int i = 0;i<str.length();i++)
		if(str[i] == '1') return i;
	return -1;
}

void input()
{
	str1.clear();str2.clear();
	add1.reset();add2.reset();
	ans.clear();
	cin >> str1 >> str2;
	add1 = bitset<81>(str1);add2 = bitset<81>(str2);
}

int main()
{
	int test;
	cin >> test;
	for(int k =1; k<= test;k++)
	{
		input();
		add();
		cout << k << " ";
		int b = find(ans);
        if(b == -1) cout << "0";
		else {
			for(; b<ans.length();b++)
				cout<< ans[b];
		}
		cout << endl;
	}
}


	
