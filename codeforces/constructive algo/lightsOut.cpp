#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, k;	
	
	vector<vector<int>> init;
	{
		{1, 1, 1},
		{1, 1, 1},
		{1, 1, 1}
        };
        
        vector<vector<int>> prs;
        
        for(int i=0; i<3; i++)
        {
        	for(int j=0; j<3; j++)
        	{
        		cin>>prs[i][j];
        	}
        }
        
        for(int i=0; i<3; i++)
        {
        	for(int j=0; j<3; j++)
        	{
        		a=0, b=0, k=0;
        		if(prs[i][j]>0)
        		{
        			for(k=0; k<prs[i][j]; k++)
        			{
					while(b<3)
					{
						if(init[a][b]==0)
						{
							init[a][b] = 1;
							b+=1;
						}
						else
						{
							init[a][b] = 0;
							b+=1;
						}
					}
					while(a<3)
					{
						if(init[a][b]==0)
						{
							init[a][b] = 1;
							a+=1;
						}
						else
						{
							init[a][b] = 0;
							a+=1;
						}
					}
        			}
        		}
        	}
        }
        
        for(int i=0; i<3; i++)
        {
        	for(int j=0; j<3; j++)
        	{
        		cout<<init[i][j];
        	}
        }
        
}
