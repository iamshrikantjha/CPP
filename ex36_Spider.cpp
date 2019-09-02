//Spider Fight
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void getAns(vector<int> v, int l, int r)
{
    for (auto k = v.front()+l; k != v.front()+r; k++)
    {
        cout << v[k]+r << " " << endl;
        // cout<<"Yes"<<l<<" "<<r<<endl;
    }
    return;
}

//Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
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
        int q;
        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            getAns(v, l, r);
        }
    }

    return 0;
}