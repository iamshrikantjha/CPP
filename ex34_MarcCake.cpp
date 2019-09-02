//Marc Cake
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll getMiles(vector<int> v, int e)
{
    ll maxCal = 0;
    for (int j = 0; j < e; j++)
    {
        maxCal = maxCal + (pow(2, j) * v[j]);
        // cout<<"v[j]"<<v[j]<<endl;
        // cout<<"pow"<<pow(2, j)<<endl;
        // cout<<maxCal<<endl;
    }
    return maxCal;
}

//Driver Code
int main()
{
    int e;
    cin >> e;
    vector<int> v;
    for (int i = 0; i < e; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.rbegin(), v.rend());
    // for(auto x: v) cout<<x<<" ";
    cout << getMiles(v, e) << endl;

    return 0;
}



// 3
// 1 3 2
// 4
// 7 4 9 6