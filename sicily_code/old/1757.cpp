#include <iostream>
#include <string>
using namespace std;
int n;
string str1,str2,str3;
int main()
{
    cin >> n;
    while(n--)
    {
        char ch1,ch2;
        cin >> str1>>ch1>>str2>>ch2>>str3;
        int a=0,b=0,c=0;
        int tag=0;
        for(int i=0;i<str1.length();i++)
        {
            if(isdigit(str1[i]))
                a=a*10+str1[i]-'0';
            else
            {
                tag =1;
                break;
            }
        }
            for(int i=0;i<str2.length();i++)
        {
            if(isdigit(str2[i]))
                b=b*10+str2[i]-'0';
            else
            {
                tag =2;
                break;
            }
        }
        for(int i=0;i<str3.length();i++)
        {
            if(isdigit(str3[i]))
                c=c*10+str3[i]-'0';
            else
            {
                tag =3;
                break;
            }
        }
      switch(tag)
      {
      case(1):
          cout <<c-b<<" + "<< b <<" = "<<c<<endl;
          break;
      case(2):
          cout<<a  <<" + "<< c-a <<" = "<<c <<endl;
          break;
      case(3):
          cout<<a <<" + "<< b << " = " << a+b <<endl;
          break;
      }
    }
}