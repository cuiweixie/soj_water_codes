#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    vector<char> out;
   int num,mod;
   while(cin >> num)
    {
   if(num > 0)
    {
        mod = num%3;
       while(num !=0)
    {
       if(mod == 2)
       {
           out.push_back('-');
            num = num/3 +1;
       }
       else
     {
         if(mod == 0) out.push_back ('0');
          else out.push_back ('1');
           num = num/3;
      }
      mod = num%3;
      }
            
   }
      else if(num == 0)
          cout << "0";
    else
     {
           mod = num%3;
          while(num !=0)
    {
        if(mod == -2)
       {
           out.push_back('1');
           num = num/3 -1;
      }
        else
       {
         if(mod == 0) out.push_back ('0');
            else out.push_back ('-');
            num = num/3;
       }
       mod = num%3;
       }
 
      }
for(int i = out.size()-1; i >= 0; i --)
{
   cout << out[i];
}
out.clear();
cout << endl;
   }
}