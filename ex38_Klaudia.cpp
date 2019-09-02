//Apple Division
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void apps(string a, string b)
{
    // string n = to_string((stoi(a)-stoi(b))/2);
    // string k = to_string(((stoi(a)-stoi(b))/2) + stoi(b));
    cout<<((stoi(a)-stoi(b))/2) + stoi(b)<<endl;;
    // cout<<k<<endl;
    // cout<<n<<endl;
    cout<<((stoi(a)-stoi(b))/2)<<endl;
    return;
}

//Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a, b;
        cin>>a>>b;
        apps(a, b);
    }
    return 0;
}