#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	string ans="";
	
	cin>> s;
	
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='.')
		{
			ans.append("0");
		}
		else if(s[i]=='-' && s[i+1]=='.')
		{
			ans.append("1");
			i+=1;
		}
		else if(s[i]=='-' && s[i+1]=='-')
		{
			ans.append("2");
			i+=1;
		}
		
	}
	cout<<ans;
}
