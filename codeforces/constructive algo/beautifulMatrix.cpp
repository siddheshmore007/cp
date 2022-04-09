#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m[5][5] = {0};
	int a,b;
	
	for(int i=0; i<5; i++)
	{	for(int j=0; j<5; j++)
		{
			cin>> m[i][j];
		}
	}
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(m[i][j]==1)
			{
				a = i;
				b = j;
				break;
			}
		}
	}
    
    if(a<2 && b<2){cout<<((2-a)+(2-b))<<"\n";}
    else if(a<2 && b>2){cout<<((2-a)+(b-2))<<"\n";}
    else if(a>2 && b<2){cout<<((a-2)+(2-b))<<"\n";}
    else if(a>2 && b>2){cout<<((a-2)+(b-2))<<"\n";}
    else if(a==2)
    {
        if(b<2){cout<<2-b;}
        else{cout<<b-2;}
        
    }
    else if(b==2)
    {
        if(a<2){cout<<2-a;}
        else{cout<<a-2;}
    }
    else{cout<< 0 <<"\n";}
}

