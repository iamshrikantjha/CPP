//Codeforces ex1
#include <bits/stdc++.h>
using namespace std;

//Driver Code
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int ns;
        cin >> ns;
        // if (ns == 1)
        // {
        //     cout << "YES" << endl;
        //     continue;
        // }
        // else
        {
            vector<int> st;
            for (int i = 0; i < ns; i++)
            {
                int a;
                cin >> a;
                st.push_back(a);
            }
            int count = 0;
            for (int j = 0; j < ns - 1; j++)
            {
                count = count + abs(st[j + 1] - st[j]);
                // cout<<count<<endl;
            }
            cout << "This is count" << endl;
            cout << count << endl;
            cout<<st.at(0)<<endl;
            cout<<st.at(ns-1)<<endl;
            int edge = abs(st.at(0) - st.at(ns-1)) + count;
            cout<<edge<<endl;
            // if(edge = 2*(ns-1))
            // {
            //     cout<<"YES"<<endl;
            // }
            // else
            // {
            //     cout<<"NO"<<endl;
            // }
        }
    }
    return 0;
}