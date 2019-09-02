//Get Frequency
#include <bits/stdc++.h>
using namespace std;

void hashf(vector<int> v)
{
    //hashMap
    map<int, int> fasty;

    // get frequencies
    for (int j = 0; j < v.size(); j++)
    {
        fasty[v[j]]++;
    }
    //traversing
    for (auto x : fasty)
    {
        cout << x.first << " " << x.second << endl;
    }
}

//Driver Code
int main()
{
    int e;
    cin >> e;
    vector<int> v;
    while (cin >> e)
    {
        v.push_back(e);
    }
    hashf(v);

    return 0;
}