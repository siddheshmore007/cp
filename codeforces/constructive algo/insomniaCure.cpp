#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k, l, m, n, d, temp;
	
	cin>> k >> l >> m >> n >> d;
	
	unordered_map<int, string> dragons;
	
	temp = k;
	while(k<=d)
	{
		if(dragons.count(k)>0)
		{
			k+=temp;
		}
		else
		{
			dragons[k] = "harmed";
			k += temp;
		}
		
	}
	
	temp = l;
	while(l<=d)
	{
		if(dragons.count(l)>0)
		{
			l+=temp;
		}
		else
		{
			dragons[l] = "harmed";
			l+=temp;
		}
		
	}
	
	temp = m;
	while(m<=d)
	{
		if(dragons.count(m)>0)
		{
            m+=temp;
		}
		else
		{
			dragons[m] = "harmed";
			m+=temp;
		}
	}
	
	temp = n;
	while(n<=d)
	{
		if(dragons.count(n)>0)
		{
			n+=temp;
		}
		else
		{
			dragons[n] = "harmed";
			n+=temp;
		}
	}
	
	cout<< dragons.size();
}
