#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(vector<int> &list,int &p)
{
	for(unsigned int i=1; i < list.size()&&list[i] <= (int)sqrt((double)p);i++)
	{
		if(p % list[i] == 0)
		  return false;
	}
	return true;
}

int main()
{
	vector<int> list;
	list.push_back(2);
    list.push_back(3);
	int p(3);
	while(list.size()!= 100000)
	{
	     while(1)
		 {
			  p+=2; 
			 if(isPrime(list,p))
			 {
				 list.push_back (p);
				 goto out;
			 }
			
		 }
       out:;
	}

    
	int k;
	while(cin >> k)
	{
		if(k == 0)
		{
			return 0;
		}
		for(int i = 0;i < 100000;i++)
		{
			if(k == list[i])
			{
				cout << "0" << endl;
				goto ou;
			}
			if(list[i] < k &&  k < list[i+1])
				cout << list[i+1] - list[i] << endl;
		}
ou:;
	}
}

