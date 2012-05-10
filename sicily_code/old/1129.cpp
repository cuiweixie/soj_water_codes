#include <iostream>
#include <stdio.h>
using namespace std;
char ch[14];
void done()
{
	int w=10;
	int ans=0;
	for(int i=0;i<11;i++)
	{
		if(isdigit(ch[i]))
		{
			ans+=(ch[i]-'0')*w;
			w--;
		}
	}
	ch[12] = 11 - (ans % 11);
        if(ch[12] > 10)
        {
           ch[12] = '0';
        }
        else
            ch[12] = ch[12] < 10 ? ('0'+ch[12]) : 'X';
		ch[11]='-';
printf("%s\n",ch);
}

int main()
{
	ch[13]=0;
	while (scanf("%s", ch) == 1)
	{
		done();
	}
}
