//SPOJ
#include<bits/stdc++.h>
using namespace std;

int t;

int reverb(int a)
{
    string s = to_string(a);
    reverse(s.begin(), s.end());
    a = stoi(s);
    return a;
}

//Driver Code
int main()
{
    
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        // c = reverb(a);
        // c = c + reverb(b);
        cout<<reverb(reverb(a)+reverb(b))<<endl;
    }
    return 0;
}


// 3
// 24 1
// 4358 754
// 305 794