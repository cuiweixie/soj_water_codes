#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	int code_len,pro_len;
	string code,pro; 
	string str;
	while(cin >> code_len)
	{
		for(int i=0;i<code_len;i++)
		{
			cin >> str;str=str+" ";
			code=code+str;
		}
		cin >> pro_len;
		for(int i=0;i<pro_len;i++)
		{
			cin >> str; str=str+" ";
		pro=pro+str;
	}
	int pos = pro.find(code);
	if(pos==string::npos)
		cout <<"no solution"<<endl;
	else
	{
		int count=0;
		for(int i=0;i<pos;i++)
		{
			if(pro[i]==' ')
				count++;
		}
		cout << count << endl;
	}
	}
}