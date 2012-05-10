#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 class region
 {
 private:
	 int start;
	 int end;
 public:
	 region(){}
	 region(int x,int y)
	 {
		 start = x; end = y;
	 }
	 friend istream& operator>>(istream & in,region &a)
	 {
		 in >> a.start >> a.end;
		 return in;
	 }
	 bool isIntersect(region b)
	 {
		 if(b.getStart()<= this->end)
			 return true;
		 else return false;
	 }

	 void unite(region b)
	 {
		 end = b.getEnd();
	 }

	int getStart()
	 {
		 return start;
	 }

	int getEnd()
	 {
		 return end;
	 }

	 int length()
	 {
		 return end-start+1;
	 }
	 bool operator<(region &b)
	 {
		 if(this->end > b.getStart ())
			 return true;
		 else return false;
	 }
 };

int main()
{
	int num,n;
	cin >> num >> n;
	vector<region> list;
	for(int i=0;i <n;i++)
	{
	  region temp;
      cin >> temp;
	  list.push_back (temp); 
	}
    sort(list.begin(),list.end());
		int treeNum(0);
	for(unsigned int i=0; i<list.size()-1;i++)
	{
		if(list[i].isIntersect(list[i+1]))
		{
			list[i].unite(list[i+1]);
			list.erase(list.begin()+i+1);
		}
	}

	for(unsigned int i=0;i<list.size();i++)
	{
        treeNum += list[i].length();
	}
	cout <<num+1-treeNum << endl;
}