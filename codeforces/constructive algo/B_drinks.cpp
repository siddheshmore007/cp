#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, d;
	double poeach=0.0;
	double volume;
	cin>> n;
	
	for(int i=0; i<n; i++)
	{
		cin>> d;
		poeach += d;
	}
	
	volume = (poeach/n);
	cout<< volume;
}
