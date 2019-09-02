//Min Sum
#include <bits/stdc++.h>
using namespace std;

int getMin(vector<int> v, int e)
{
    int ming, minc;
    ming = abs(v.at(1)) - v.at(0);
    // cout<<v.at(0)<<endl;
    // cout<<v.at(1)<<endl;
    // cout<<v.at(2)<<endl;
    // cout<<ming<<endl;
    for (int j = 0; j < e; j++)
    {
        minc = abs(v[j + 1] - v[j]);
        // cout<<"New Minc"<<minc<<endl;
        if (minc < ming)
        {
            ming = minc;
            // cout<<"New Ming"<<ming<<endl;
        }
    }
    return ming;
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
    sort(v.begin(), v.end());
    cout << (getMin(v, e)) << endl;
    return 0;
}




// 8
// -2 -3 4 -1 -2 1 5 -3