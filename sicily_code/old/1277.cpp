#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Kid
{
public:
	int own;
	int need;
	Kid(){}
	Kid(int o,int n):own(o),need(n){}
};

bool cmp(Kid A,Kid B)
{
	return A.need < B.need;
}

int main()
{
	int n,s;
	while(cin >>n >> s)
	{
		if(n == 0) return 0;
         vector<Kid> kid(n);
		 for(int i=0;i<n;i++)
		 {
			 cin >> kid[i].own >> kid[i].need;
		 }
		 sort(kid.begin(),kid.end(),cmp);
		 for(int i=0;i<n;i++)
		 {
			 if(s >= kid[i].need)
			 {
				 s+=kid[i].own;
			 }
			 else{
				 cout << "NO" << endl; goto out;
			 }
		 }

		 cout << "YES"<<endl;
out:;
	}

}


