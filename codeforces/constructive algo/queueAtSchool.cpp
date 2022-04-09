#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, sec;
	string s;
	char c1 = 'B';
	char c2 = 'G';
	int found;
	
	cin>> n >> sec >> s;
	
	while(sec!=0)
	{
	    found=0;
	    while(found<n)
	    {
	        found = s.find("B", found);
	        //cout<<found<<"\n";
	        if(s[found+1]==c2)
	        {
    	        s[found] = c2;
    	        s[found+1] = c1;
    	        found +=2;
	        }
	        else{found+=1;}
	    }
	    
	    sec -= 1;
	}
	
	cout<<s;
} 
