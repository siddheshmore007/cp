
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int n, ele, unique, count;
	count = 0;
	int ans;
	cin>> t;
	
	for(int i=0; i<t; i++)
	{
		cin>>n;
		int arr[n] = {0};
		set<int> s;
		ans = 0;
		for(int j=0; j<n; j++)
		{
			cin>> ele;
			arr[j] = ele;
			s.insert(ele);
		}
		
		set<int>::iterator itr;
		
		for(itr = s.begin(); itr != s.end(); itr++)
		{
			unique = *itr;
			
			count = 0;
			for(int k=0; k<n; k++)
			{
				if(arr[k]==unique){count += 1;}
			}
			
			if(count == 1){ans+=1;}
			if(count > 1)
			{
			    if(unique==0){ans+=1;}
			    else{ans+=2;}    
			}
			
		}
		
		cout<< ans<< "\n"; 
		
	}
}
