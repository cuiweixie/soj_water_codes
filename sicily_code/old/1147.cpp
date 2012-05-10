#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class student
{
private:
	string name;
	int t_score;
	int c_score;
	char carde;
	char west;
	int paper;
	int scholarship;

public:
	student(){}
     student(string name1,int t_score1,int c_score1,char carde1,char west1,int paper1)
	 {
		 name = name1; t_score = t_score1; c_score = c_score1; carde = carde1; west = west1;
		 paper = paper1;
		 scholarship =0;
		 if(t_score >80&& paper >=1)
			 scholarship+=8000;
		 if(t_score >85&& c_score >80)
			 scholarship += 4000;
		 if(t_score >90)
			 scholarship += 2000;
		 if(t_score > 85&& west == 'Y')
			 scholarship += 1000;
		 if(c_score >80&&carde =='Y')
			 scholarship += 850;
	 }
	bool operator<(student &b)
	 {
		 if( scholarship <b.getsholarship())
			 return true;
		 else return false;
	}

	int getsholarship()
	{
		return scholarship;
	}

	friend ostream& operator<<(ostream& os,student &a)
	{
		os << a.name << endl;
		os << a.scholarship << endl;
		return os;
	}

	bool operator==(student &b)
	{
		if(scholarship == b.getsholarship ())
			return true;
		else return false;
	}

};

int main()
{
	int n;
	cin >> n;
    vector<student> st; int all=0;
	for(int i=0;i<n;i++)
	{
       string name;
	   int t_score;
	   int c_score;
	   char carde;
	   char west;
	   int paper;
	   cin >> name >> t_score>> c_score>>carde >> west >> paper;
	   st.push_back (student(name,t_score,c_score,carde,west, paper));
	   all +=st[i].getsholarship ();
	}
      student temp = st[0];
	  for(int i =1;i < n;i++)
	  {
		  if(temp < st[i])
			  temp = st[i];
	  }
      cout << temp; 
	 cout << all << endl;
}