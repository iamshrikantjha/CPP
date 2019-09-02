//Codeforces
#include <bits/stdc++.h>
using namespace std;

//Driver Code
int main()
{
    int e, plus = 0, minus = 0, tor = 0;
    cin >> e;
    vector<int> v;
    for (int i = 0; i < e; i++)
    {
        int a;
        cin >> a;
        if (a >=0)
        {
            plus = plus + abs(a-1);
        }
        else
        {
            minus++;
        }
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int rem = minus%2;
    if(rem!=0)
    {
        for(int i=0; i<minus-rem; i++)
        {
            tor = tor + abs(v[i]) - 1;
        }
        tor = tor + abs(v.at(minus - rem)) + 1;
    }
    else
    {
        for(int i=0; i<minus-rem; i++)
        {
            tor = tor + abs(v[i]) - 1;
        }
    }
    
    cout << tor + plus << endl;
    return 0;
}