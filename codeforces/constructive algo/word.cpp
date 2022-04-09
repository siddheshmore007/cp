#include <bits/stdc++.h>
using namespace std;

int main()
{
	int clower=0, cupper=0;
	string s;
	cin>> s;
	
	for(int i=0; i<s.length(); i++)
	{
		if(islower(s[i]))
		{
			clower += 1;
		}
		else
		{
			cupper += 1;
		}
	}
	if(clower>cupper)
	{
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
	else if(clower<cupper)
	{
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	}
	else
	{
	    transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
	cout<< s<< "\n";
}
