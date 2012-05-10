#include <iostream>
#include <algorithm>
using namespace std;

int obj[30001];
int n,w;
int main()
{
	int t =0;
	while(cin >> w>> n)
	{
		if(t++>0) cout << endl;
		for(int i=1;i<=n;i++)
			cin >> obj[i];
		sort(obj+1,obj+n+1);
		int left = 1,right = n;
		int ans =0;
		while(right >=left)
		{
			if(left == right)
			{
				ans++;
				left++;
				right--;
			}
			else{
				if(obj[left]+obj[right] > w)
				{
					ans++;
					right--;
				}
				else
				{
					ans++;
					left++;
					right--;
				}
			}
		}
		cout << ans << endl;
	}
}
