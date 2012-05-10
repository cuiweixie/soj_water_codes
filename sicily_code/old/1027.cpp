#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct Node{
	string name,ip;
};
struct out{string majia,name;};
bool cmp(out a,out b){ return a.name<b.name;}
vector<Node> vec;
vector<out> vec_o;
bool used[22];

int main()
{
	int n;;cin >> n;
	while(n!=0)
	{
		for(int i=0;i<22;i++) used[i]=0;
		vec.clear();vec_o.clear();
		Node a;
		while(n--)
		{
			cin >> a.name >> a.ip;
			vec.push_back(a);
		}
		out temp;
		for(int i=0;i<vec.size();i++)
		{
			if(used[i]==0)
			{
				temp.name=vec[i].name;
				for(int j=i+1;j<vec.size();j++)
				{
					if(vec[j].ip==vec[i].ip)
					{
						temp.majia=vec[j].name;
						used[j]=1;
						break;
					}
				}
				vec_o.push_back(temp);
			}
		}
		sort(vec_o.begin(),vec_o.end(),cmp);
		for(int i=0;i<vec_o.size();i++)
			cout <<vec_o[i].majia<<" is the MaJia of "<<vec_o[i].name<<endl;
		cout << endl;
		cin >> n;
	}
}


		
		
