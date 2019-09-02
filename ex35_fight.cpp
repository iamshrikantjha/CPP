//Fight
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

//Driver Code
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    // for(auto x: v) cout<<"vec"<<x;
    // cout<<"Happy"<<endl;
    for (int k = 0; k <= n; k++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (v[k] + v[j] == x)
            {
                // cout<<i+j<<endl;
                // cout<<"Would like to p val"<<endl;
                cout << k+1 << " " << j+1 << endl;
                return 0;
            }
            // else
            // {
            //     cout<<"Haha "<<v[k]<<" "<<v[j]<<endl;
            // }
            
        }
    }
    cout << "-1" << endl;

    return 0;
}