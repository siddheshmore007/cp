#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, columns;
	string seen, hidden, ch;
	cin>> t;
	for(int i=0; i<t; i++)
	{
		cin>> columns;
		cin>> seen;
		hidden = "";
		for(int i=0; i<columns; i++)
		{
			ch = seen.at(i);
			if(ch == "L"){
				hidden += "L";
			}
			else if(ch == "R"){
				hidden += "R";
			}
			else if(ch == "U"){
				hidden += "D";
			}
			else if(ch == "D"){
				hidden += "U";
			}
		}
		cout<< hidden<< "\n";
		
	}
}
