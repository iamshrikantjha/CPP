//Range Based Loops
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void rangeLoop(vector<int> v)
{
    cout<<v.front()<<endl;
    for (int i = v.front(); i <= v.front()+2; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

//Driver Code
int main()
{
    int e;
    vector<int> v;
    while(cin>>e)
    {
        v.push_back(e);
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<endl;
    // }

    rangeLoop(v);

    cout<<"Size "<<v.size()<<endl;
    
    return 0;
}