#include <iostream>
#include <queue>
using namespace std;
int num[30] = {10, 2, 13, 26, 15, 19, 27, 23, 12, 4, 8, 21, 25, 14, 1, 9, 5, 18, 29, 16, 24, 28,\
               20, 7, 3, 11, 22, 30, 17, 6};

int main()
{
	int start;
	while(cin >> start&&start!=-1)
	{
		int beg=0;
		for(int i=0;i<30;i++)
		{
			if(num[i]==start)
			{beg=i;
			break;
			}
		}
		for(int i=0;i<29;i++)
		{
			cout << num[(beg)%30]<<" ";
			beg++;
		}
		cout <<num[(beg)%30]<<endl;
	}
}
