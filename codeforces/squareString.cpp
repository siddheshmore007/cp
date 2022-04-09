#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, mid, n;
	string s;
	cin>> t;
	for(int i=0; i<t; i++)
	{
		cin>> s;
		n = s.length();
		if(n % 2 != 0)
		{
			cout<< "NO"<< "\n";
		}
		else
		{
			mid = n/2;
			if(s.substr(0, mid) == s.substr(mid, n-1))
			{
				cout<< "YES"<< "\n";
			}
			else
			{
				cout<< "NO"<< "\n";
			}
		}
	}
}
