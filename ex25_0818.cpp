//String to Integer & Vice Versa
#include<bits/stdc++.h>
using namespace std;


//Driver Code
int main()
{
    int t=19980;
    string s;
    s = to_string(t);
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    t = stoi(s);
    cout<<t+1<<endl;

    return 0;
}