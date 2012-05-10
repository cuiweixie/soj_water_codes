#include <iostream>
#include <string>
#include <cmath>
using namespace std;
	string preOrder,postOrder;
	int power=0;
	void find()
	{
		for(int i=1;i<preOrder.length();i++)
			for(int j=postOrder.length()-2;j>=0;j--)
			{
				if(preOrder[i] == postOrder[j])
				{
					if(preOrder[i-1] == postOrder[j+1])power++;
					break;
				}
			}
	}
int main()
{
	cin >> preOrder >> postOrder;
	find();
	   printf("%d", (int)pow(2.0, (double)power));

}

