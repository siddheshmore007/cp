#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, digit, temp;
	int found = 0;
	
	cin>> n;
	
	while(found!=1 || n<=9000)
	{
		n += 1;
		temp = n;
		unordered_map<int, bool> unique;
		while(n!=0)
		{
			digit = n%10;
			//cout<<digit<<"\n";
			if(unique.count(digit)>0)
			{
				break;
			}
			else
			{
				unique[digit] = true;
			}
			n = (n-digit)/10;
			
		}
		if(unique.size()==4)
		{
			cout<< temp;
			found = 1;
			break;	
		}
		else
		{
		    n = temp;
		    found = 0;
		    continue;
		}
	}
}
