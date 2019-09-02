//Next Plaindrome
#include <bits/stdc++.h>
using namespace std;

int getnpal(string e)
{
    for (int i = 0; i != e.length(); i++)
    {
        if (e[i] == e[e.length() - i])
        {
            cout << "This is the one" << endl;
            cout << e << endl;
        }
        else
        {
            int f = stoi(e);
            f = f+1;
            string s = to_string(f)
            getnpal(s);
        }
    }
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
        e = e + 1;
        string e = to_string(e);
        cin >> e;
        cout << e + 1 << endl;
        cout << getnpal(e) << endl;
    }
    return 0;
}