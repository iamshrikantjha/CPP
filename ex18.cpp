//Contest H
#include <bits/stdc++.h>
using namespace std;

//Driver Code
int main()
{
    int t;
    cin >> t;
    vector<int> vec;
    for(int i=0; i<t; i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    if(vec.at(t-1)%10==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    

    return 0;
}