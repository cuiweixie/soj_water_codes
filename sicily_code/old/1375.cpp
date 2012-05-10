#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> breed0;
vector<int> breed1;
int N;

int main()
{
	cin >> N;
	int b,crd;
	for(int i=0;i<N;i++)
	{
		cin >> b >> crd;
		if(b == 0) breed0.push_back(crd);
		else breed1.push_back(crd);
	}

	sort(breed0.begin(),breed0.end());
	sort(breed1.begin(),breed1.end());
   
	// count 

		
			   



			

