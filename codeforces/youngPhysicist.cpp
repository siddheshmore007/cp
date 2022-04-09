#include <bits/stdc++.h>
using namespace std;

int main()
{
	int f;
	vector<int> x;
	vector<int> y;
	vector<int> z;
	int a, b, c, resa, resb, resc;
	cin>> f;
	
	while(f!=0)
	{
	    cin>> a>> b>> c;
		x.push_back(a);
		y.push_back(b);
		z.push_back(c);
		f -= 1;
	}
	
	resa = accumulate(x.begin(), x.end(), 0);
	resb = accumulate(y.begin(), y.end(), 0);
	resc = accumulate(z.begin(), z.end(), 0);
	
	if(resa==0 && resb==0 && resc==0){cout<< "YES"<< "\n";}
	else{cout<< "NO"<< "\n";}
}
