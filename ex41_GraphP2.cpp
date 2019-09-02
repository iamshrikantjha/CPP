//Graph Log 2
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void eddy(vector<int> G[], int a, int b)
{
    G[a].push_back(b),
    G[b].push_back(a),
}

void printg(vector<int> G[], int v)
{
    for (int i = 0; i < v; i++)
    {
        cout<<"The adjacency list for the head "<<i<<" is : "<<endl;
        for(auto x: G[])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
}

//Driver Code
int main()
{
    int e, v;
    cin>>e>>v;
    vector<int> G[E];
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin>>a>>b;
        eddy(G, a, b);
    }

    printg(G, v);
    
    return 0;
}