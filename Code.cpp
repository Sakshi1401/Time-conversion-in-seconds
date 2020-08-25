#include<iostream>

using namespace std;

class Time
{
	int hr,sec,min,totals;
	
	public:
		void input()
		{
			cout<<"Enter Time:"<<endl;
			cout<<"Hours?";
			cin>>hr;
			cout<<"Minutes?";
			cin>>min;
			cout<<"Seconds?";
			cin>>sec;
		}
		
		void calc()
		{
			totals=hr*3600+min*60+sec;
		}
		
		void output()
		{
			cout<<"Time:"<<hr<<":"<<min<<":"<<sec<<endl;
			cout<<"Time in Total seconds: "<<totals;
		}
};

int main()
{
	Time t;
	t.input();
	t.calc();
	t.output();
	
	return 0;
}
