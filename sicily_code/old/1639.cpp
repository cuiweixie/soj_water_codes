#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str;
    while(cin >> str)
    {
        int sum=0;
        vector<char> vec_ch;
        vector<int> vec_t;
        for(int i=0;i<str.length();)
        {
                if(str[i]>='A'&&str[i]<='z')
                {
                    vec_ch.push_back(str[i]);
                    vec_t.push_back(1);
                    i++;
                    sum++;
                       if(sum>50) {
            cout <<"TOO LONG"<<endl;
                goto out;
					   }
				}
                else{
            int times=0;
            while(!(str[i]>='A'&&str[i]<='z'))
            {
                times=times*10+str[i]-'0';
                i++;
            }
            sum+=times;
            if(sum>50) {
            cout <<"TOO LONG"<<endl;
                goto out;
			}
			
            vec_t.push_back(times);
            vec_ch.push_back(str[i]);
            i++;
				}
		}
	
            for(int i=0;i<vec_ch.size();i++)
            {
                for(int j=0;j<vec_t[i];j++)
                    cout <<vec_ch[i];
            }
            cout <<endl;
        out:;
        vec_t.clear();
        vec_ch.clear();
		
	}

}