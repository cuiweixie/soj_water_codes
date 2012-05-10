#include <iostream>
#include <cstdio>
using namespace std;
char isbn[13];
void done()
{
	int m=1;
	int sum=0;
	int i=0;
	while(m<=9)
	{
		if(isbn[i]!='-')
		{
			sum=sum+(isbn[i]-'0')*m;
			m++;
			i++;
		}
		else
		{
			i++;
			sum=sum+(isbn[i]-'0')*m;
			m++;
			i++;
		}
	}
		sum = sum%11;
		char check;
		if(sum==10)
		{
			check = 'X';
		}
		else
		{
			check=sum+'0';
		}
		if(check == isbn[12])
			cout <<"Right"<<endl;
		else
		{
			isbn[12]=check;
			for(int i=0;i<13;i++)
				cout << isbn[i];
			cout << endl;
		}
}

int main()
{

	while(scanf("%s",isbn)==1)
		done();
}
			