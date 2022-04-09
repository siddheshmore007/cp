#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, tall, shrt, swaps=0;
	int sol;
	cin>>n;
	int a[n];
	int temp[n];
	
	int line[n] = {0};
	for(int i=0; i<n; i++)
	{
		cin>>sol;
		a[i] = sol;
		temp[i] = sol;
	}
	
	sort(a, a+n);
	
	
	tall = a[n-1];
	shrt = a[0];
	
	int k, l;
	for(k=n-1; k>=0; k--)
	{
		if(temp[k]==shrt)
		{
			swaps += (n-1)-k;
			break;
		}
	}
	for(l=0; l<n; l++)
	{
		if(temp[l]==tall)
		{
			swaps += l;
			break;
		}
	}
	if(k<l){cout<<swaps-1<<"\n";}
	else{cout<<swaps<<"\n";}
	
	
	
	
	
}
