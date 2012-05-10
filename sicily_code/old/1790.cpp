#include <iostream>
#include <string>
using namespace std;
string _left,_right;
int main()
{
int test;
cin >> test;
while(test--)
{
    cin >> _left>>_right;
    if(_left!=_right)
    cout <<"NO"<<endl;
    else
    {
       int ans =0;
       for(int i=0;i<_left.length();i++)
       ans = (ans*10+_left[i]-'0')%11;
       if(ans==0)
       cout <<"YES"<<endl;
       else
       cout <<"NO"<<endl;
       }
       }
      }