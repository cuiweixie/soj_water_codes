#include <iostream>
using namespace std;
int a[31];
void cal()
{
	a[0] =1;
	for(int i=1;i<=30;i++)a[i]=0;
	a[2]=3;a[4]=11;
	for(int i=6;i<=30;i+=2)
	{
	   int temp=0;
	   for(int j=0;j<=i-4;j+=2)
	   {
		   temp+=a[j];
	   }
	   a[i] = 2*temp+3*a[i-2];
	}
}
int main()
{
	int n;cal();
	while(cin >> n&&n!=-1)
	{
		cout << a[n] << endl;
	}
}