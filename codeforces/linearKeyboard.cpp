#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, current, next, time;
	time = 0;
	string keyboard, s;
	
	cin>> t;
	
	for(int i=0; i<t; i++)
	{
		cin>> keyboard;
		cin>> s;
		n = s.length();
		
		for(int j=0; j<n-1; j++)
		{
			current = keyboard.find(s[j]);
			next = keyboard.find(s[j+1]);
			if(current>next)
			{
				time += (-1*(next-current));
			}
			else
			{
				time += (next-current);
			}
		}
		cout<< time<< "\n";
		time = 0;
	}
}
