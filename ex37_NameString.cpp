//NameString
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

//Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v,
            int r, k, v;
        cin >> r >> k >> v;
        v.push_back(r);
        v.push_back(k);
        v.push_back(v);
        int mimi = min_element(v.begin(), v.end());
        v.erase(std::find(v.begin(), v.end(), mimi));
        for (int k = 0; k < 2; k++)
        {
            cout<<v[k]<<endl;
        }
        
    }
    return 0;
}