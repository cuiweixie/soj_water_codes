#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int isp(char ch)
{
	if(ch == '#')
		return 0;
	if(ch == '(')
		return 1;
	if(ch == '^')
		return 7;
	if(ch == '*')
		return 5;
	if(ch == '+'||ch == '-')
		return 3;
	if(ch == ')')
		return 8;
}

int icp(char ch)
{
	if(ch == '#')
		return 0;
	if(ch == '(')
		return 8;
	if(ch == '^')
		return 6;
	if(ch == '*')
		return 4;
	if(ch == '+'||ch == '-')
		return 2;
	if(ch == ')')
		return 1;
}

bool is_op(char ch)
{
	if(ch == '#'||ch == '('||ch == '^'||ch == '*'||ch == '+'||ch == '-'||ch==')')
		return true;
	else return false;
}

stack<char> sta;
vector<int> expression;

void get_after_exp(string str)
{
	  while(!sta.empty()) sta.pop();
	  expression.clear();
      char ch;
	  int i=0;
	  ch = str[i]; i++;