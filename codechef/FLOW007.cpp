#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, digit, n;
	int rev;
	cin>> t;
	for(int i = 0; i < t; i++)
	{
	    cin>> n;
	    rev = 0;
	    while(n!=0)
	    {
	        digit = n%10;
	        rev += digit;
	        rev = rev*10;
	        n = (n-digit)/10;
	    }
	    rev = rev/10;
	    cout<< rev << "\n";
	}
	return 0;
}
