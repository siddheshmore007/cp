#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, a, b, c, d;
    int dr = 1, dc = 1;
    int time;
    cin>> t;
    for(int i=0; i<t; i++)
    {
        cin>> n >> m >> a >> b >> c >> d;
        time = 0;
        dr = 1;
        dc = 1;
        while(a!=c && b!=d)
        {
            a += dr;
            b += dc;
            if(a>n)
            {
                a -= 2;
                dr = -1;
            }
            if(a<=0)
            {
                a += 2;
                dr = 1;
            }
            if(b>m)
            {
                b -= 2;
                dc = -1;
            }
            if(b<=0)
            {
                b += 2;
                dc = 1;
            }
            time += 1;
        }
        cout<< time << "\n";
    }
}
