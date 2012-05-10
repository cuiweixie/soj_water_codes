#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int  N = 100000;
vector <long long int> vec;
string a; int b;
void output(long long int a)
{
	cout << a/10000;
	a = a%10000;
	cout << a/1000;
	a = a%1000;
	cout << a/100;
	a = a%100;
	cout <<a/10;
	a = a%10;
	cout << a;
}
void done()
{
	vec.clear();
	cin >> a >> b;
	if(b == 0)
		{
			cout << "0"<<endl;
			return ;
	}
	int i=a.length()-1,temp = 0;
	while(i>=0)
	{
		i = i-5;
		temp =0;
		for(int j=1;j<=5;j++)
		{
			if(i+j>=0)
			temp = temp*10+a[i+j]-'0';
		}
		vec.push_back(temp);
	
	}
	long long int co = 0;
	long long int ci = 0;
	for(int i=0;i<vec.size();i++)
	{
	     ci = co;
		 co = (ci +vec[i]*b)/N;
		 vec[i] = (ci + vec[i]*b)%N;
	}

	if(co != 0)
		vec.push_back(co);
	  i=vec.size()-1;
	cout << vec[i--];
	for(;i>=0;i--)
	{
	  output(vec[i]);   
	}
	cout << endl;
}

int main()
{
	int test;
	cin >> test;
	while(test--)
	done();
}




	


