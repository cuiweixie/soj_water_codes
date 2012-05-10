#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
struct Project{
	string name;
	int n;
};
map<string,string> ma1;
map<string,int> ma2;
vector<Project> vec;
bool cmp(Project &a,Project&b)
{
	return a.n>b.n;
}
int main()
{
	string pName,sName,str;
	while(getline(cin,str))
	{
		if(str[0]=='0')break;
		else if(str[0]=='1'){
			map<string,string>::iterator ite1=ma1.begin();
			map<string,int>::iterator ite2;
			while(ite1!=ma1.end())
			{
				ite2=ma2.find(ite1->second);
				if(ite2==ma2.end())
				{
					if(ite1->second=="0")
						ma2.insert(pair<string,int>(ite1->second,0));
					else
					ma2.insert(pair<string,int>(ite1->second,1));
				}
				else
				{
					if(ite1->first!="0")
					ma2[ite1->second]++;
				}
				ite1++;
			}
			ite2=ma2.begin();
			while(ite2!=ma2.end())
			{
				Project temp;
				temp.name=ite2->first;
				temp.n=ite2->second;
				ite2++;
				vec.push_back(temp);
			}
			sort(vec.begin(),vec.end(),cmp);
			for(int i=0;i<vec.size();i++)
				cout << vec[i].name<<" "<<vec[i].n<<endl;
			vec.clear();
			ma1.clear();
			ma2.clear();
		}
		else if(!islower(str[0]))
		{
			pName=str;
		}
		else 
		{
			sName=str;
			snam
