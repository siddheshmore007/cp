
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int n, ele;
	
	cin>> t;
	
	for(int i=0; i<t; i++)
	{
		cin>>n;
        	int arr[n] = {0};
	    	set<int> s;
		for(int j=0; j<n; j++)
		{
			cin>> ele;
			arr[j] = ele;
			s.insert(ele);
		}
		
		if(s.size()==n){cout<< n << "\n";}
		else if(s.size()==1 && s.count(0)){cout<< 1 << "\n";}
		else if(s.size()>1){cout<< (s.size())*2 << "\n";}
		
		
		
	}
}
