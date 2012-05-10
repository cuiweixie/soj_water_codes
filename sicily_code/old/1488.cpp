#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;
int M[81][81];
int n,m;
int b_e[2][81];
vector<string> choose(81);
string add_str(string str1,string str2)
{
	//format 
	if(str1.length()<str2.length()) str1.swap(str2);
	int dis = str1.length()-str2.length();
	string justification;
	for(int i=0;i<dis;i++)
		justification = "0"+justification;
	str2=justification + str2;

	// now add it 
	int ci=0,co =0;
	for(int i=str1.length()-1;i>=0;i--)
	{
		ci = co;
		co = (str1[i]-'0'+str2[i]-'0'+ci)/10;
		str1[i] = (str1[i]-'0'+str2[i]-'0'+ci)%10+'0';
	}
	if(co != 0) str1 = "1"+str1;
	return str1;
}

string multiply_two(string str)
{
	int ci=0,co=0;
	for(int i=str.length()-1;i>=0;i--)
	{
		ci = co;
		co = (ci+2*(str[i]-'0'))/10;
		str[i] =(ci+2*(str[i]-'0'))%10+'0';
	}
	if(co!=0) str = "1"+str;
	return str;
}
string int_to_string(int n)
{
	if(n==0) return "0";
	string ans;
	while(n!=0)
	{
		char ch = n%10+'0';
		ans = ch + ans;
		n = n/10;
	}
	return ans;
}

void done()
{
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin >> M[i][j];
	for(int i=1;i<=n;i++)
	{
		b_e[0][i] = 1;
		b_e[1][i] = m;
	}
	
	int temp;
	for(int i=1;i<= m;i++)
	{
		temp = 0;
		for(int j=1;j<=n;j++)
		{
			if(M[j][b_e[0][j]] < M[j][b_e[1][j]])
			{
                temp += M[j][b_e[0][j]];
				b_e[0][j]++;
			}
			else{
				temp += M[j][b_e[1][j]];
				b_e[1][j]--;
			}
		}
		choose[i] = int_to_string(temp);
	}

	choose[0] = "0";
	for(int i=m;i>=1;i--)
	{
		choose[i-1] = add_str(multiply_two(choose[i]),choose[i-1]);
	}
	cout << choose[0] << endl;
}

int main()
{
	int t=0;
	while(cin >> n >> m)
	{
		if(t++>0) cout << endl;
		done();
	}
}



		


