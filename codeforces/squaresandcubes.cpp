
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, count;
    int n, j;
    
    
    cin>>t;
    
    for(int i=0; i < t; i++)
    {
        cin>>n;
        set<int> unique;
        j = 1;
        while(pow(j, 2)<=n)
        {
            unique.insert(j*j);
            j+=1;
        }
        j=1;
        while(pow(j, 3)<=n)
        {
            unique.insert(j*j*j);
            j+=1;
        }
        cout<<unique.size();
        cout<< "\n";
        
    }
    
    return 0;
}

//2nd sol
#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
 
int main() {
    int t;
    cin >> t;
    forn(tt, t) {
        int n;
        cin >> n;
        set<int> a;
        for (int i = 1; i * i <= n; i++)
            a.insert(i * i);
        for (int i = 1; i * i * i <= n; i++)
            a.insert(i * i * i);
        cout << a.size() << endl;
    }
}






