//Spoj Boxes
#include <bits/stdc++.h>
using namespace std;

//Driver Code
int main()
{
    int a, b, c, enough = 0, count = 0;
    cin >> a >> b >> c;
    vector<int> v;
    for (int i = 0; i < a; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    // Minimum required
    int minr = b * c;
    sort(v.rbegin(), v.rend());
    for (int j = 0; j < a; j++)
    {

        enough = enough + v[j];
        count++;
        if (enough >= minr)
        {
            cout << count << endl;
            break;
        }
    }

    return 0;
}

// 5 6 3
// 3 9 5 7 3

// 3
