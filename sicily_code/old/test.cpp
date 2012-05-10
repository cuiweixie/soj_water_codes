#include <iostream>
#include <cstring>
using namespace std;
bool is_tree[10001];
int L,M;
int main()
{
	cin >> L >> M;
    memset(is_tree,1,sizeof(is_tree));
	while(M--)
	{
		int a,b;
		cin >> a >> b;
	     for(int i=a;i<=b;i++)is_tree[i]=0;
	}
	int ans =0;
	for(int i=0;i<=L;i++)if(is_tree[i])ans++;
	cout << ans <<endl;
}


	
