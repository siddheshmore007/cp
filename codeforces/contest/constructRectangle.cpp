#include <bits/stdc++.h>
using namespace std;



int main()
{
	int test;
	int f, s, t;
	cin>> test;
	 for(int i=0; i<test; i++)
	 {
	 	cin>> f >> s >> t;
	 	if((f == s+t)||(s == f+t)||(t == f+s))
	 	{
	 		cout<< "YES"<< "\n";
	 	}
	 	else
	 	{
	 		if(f==s)
	 		{
	 			if(t%2==0){cout<<"YES"<< "\n";}
	 			else{cout<< "NO"<< "\n";}
	 		}
	 		else if(s==t)
	 		{
	 			if(f%2==0){cout<<"YES"<< "\n";}
	 			else{cout<< "NO"<< "\n";}
	 		}
	 		else if(f==t)
	 		{
	 			if(s%2==0){cout<<"YES"<< "\n";}
	 			else
	 		        {
	 			    cout<< "NO"<< "\n";
	 		        }
	 		}
	 		
	 	}
	 	
	 }
	 
}
