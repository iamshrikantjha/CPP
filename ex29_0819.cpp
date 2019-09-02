//Sum Of Digits
#include <bits/stdc++.h>
#define ld long long double
using namespace std;

int getSum(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum = sum + (s[i] - '0');
        // cout<<sum<<endl;
    }
    return sum;
    // int sum = 0;
    // while (a > 0)
    // {
    //     sum = sum + (a % 10);
    //     a = (a - (a % 10)) / 10;

    //     if (a < 10)
    //     {
    //         sum = sum + a;
    //         return sum;
    //     }
    // }
    // return sum;
}

//Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin>>a;
        cout<<getSum(a)<<endl;
    }
    return 0;
}

// int sum = 0;
//     while (a > 0)
//     {
//         sum = sum + (a % 10);
//         a = (a - (a % 10)) / 10;
//         // cout<<sum<<endl;

//         if (a < 10)
//         {
//             sum = sum + a;
//             return sum;
//         }
//     }
//     return a;
