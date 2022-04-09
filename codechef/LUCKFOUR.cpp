#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, n, digit, count;
	cin>> t;
	for(int i = 0; i < t; i++)
	{
	    cin>> n;
	    count = 0;
	    while(n!=0)
	    {
	        digit = n%10;
	        if(digit == 4){count += 1;}
	        n = (n-digit)/10;
	    }
	    cout<< count << "\n";
	}
	return 0;
}
