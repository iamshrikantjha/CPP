//Graph P
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void eddy(vector<int> G[], int u, int v)
{
    G[v].push_back(u);
    G[u].push_back(v);
}

void printG(vector<int> G[], int V)
{
    for (int i = 1; i <= V; i++)
    {
        cout<<"Adj list for vertex "<<i<<" is :"<<endl;
        for(auto x: G[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
}

//Driver Code
int main()
{

    int V, E;
    cout << "Kindly enter the Vertices" << endl;
    cin >> V;
    cout << "Kindly enter the Edges" << endl;
    cin >> E;
    cout << "Adjacancey List for Graph" << endl;
    vector<int> G[E];
    for (int i = 0; i < E; i++)
    {
        int a, b;
        cin>>a>>b;
        eddy(G, a, b);
    }
    printG(G, V);

    return 0;
}