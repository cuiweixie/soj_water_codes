#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string model,match;
bool m[60][60];

bool is_math()
{
	int row = model.length(),col =match.length();
	for(int i=0;i<60;i++) m[0][i] = m[i][0] = true;
	for(int j=1;j<=col;j++)
		for(int i=1;i<=row;i++)
		{
			if(match[j] == '*')
			{

