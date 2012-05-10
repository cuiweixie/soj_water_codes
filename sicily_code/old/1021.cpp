#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		if(n == 0)
			return 0;
		int* couple = new int[2*n];
		int l,r;
		for(int i=0;i<n;i++)
		{
			cin >> l >> r;
			couple[--l]=couple[--r] = i;
		}

		stack<int> couple_stack;
		couple_stack.push(couple[0]);
		for(int i=1;i<2*n;i++)
		{
			if(couple_stack.empty())
				couple_stack.push(couple[i]);
			if(couple[i] == couple_stack.top())
				couple_stack.pop();
			else
				couple_stack.push(couple[i]);
		}

		if(couple_stack.empty())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		delete [] couple;
	}
}
