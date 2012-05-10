#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n==1||n==2)
	{
		cout << "1" << endl;
		return 0;
	}
	if(n==3||n==4)
	{
		cout << "2" << endl;
		return 0;
	}
	if(n == 5||n == 6)
	{
		cout << "3" << endl;
		return 0;
	}
	if(n ==7|| n==8)
	{
		cout << "4" << endl;
		return 0;
	}

    vector<int> list;
	while(n)
	{
		int temp = n%2;
		list.push_back(temp);
		n/=2;
	}

	int length = list.size();
	int count =0;
	if(length %2 == 1)
	{
		int temp(1),a(1);
      count += (int)pow(2.0,(length+1)/2) -2;
      for(int i=0;i <length/2;i++)
	  {
		  if(list[i] !=  list[length -1-i])
			  a=0;
	  }
	  count+=a;
	  for(int i=(length+1)/2 -1; i <length -1;i++)
	  {
		  if(list[i] == 1)
			  count+=(int)pow(2.0,(double)(i - ((length+1)/2 -1)));
	  }
	  cout << count << endl;
	}

	else
	{
		count += (int)pow(2.0,length/2) -2+(int)pow(2.0,length/2-1);
		int temp(1),a(1);
		  for(int i=0;i <length/2;i++)
	  {
		  if(list[i] !=  list[length -1-i])
			  a=0;
	  }
	  count+=a;
	  for(int i=(length+1)/2; i <length -1;i++)
	  {
		  if(list[i] == 1)
			  count+=(int)pow(2.0,(double)(i - ((length+1)/2 -1)));
	  }
	  cout << count << endl;
	}
}

