#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int L;
		cin >> L;
		if(L == 0)
			cout << "1"<< endl;
		else if(L == 1)
			cout << "2" << endl;
		else if(L == 2)
			cout << "7" << endl;
		else
		{
			 int n[4];
			 n[0] = 1; n[1]= 2; n[2] = 7;
		for(int i=3;i<= L;i++)
		{
         
		   n[3] = (3*n[2] +n[1] - n[0]+10)%10;
		   n[0] = n[1];
		   n[1] = n[2];
		   n[2] = n[3];
		}
		cout << n[3] << endl;
		}
	}
}



			
			