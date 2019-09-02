//Kadane
#include<bits/stdc++.h>
using namespace std;

int getMax(vector<int> v, int e)
{
    int gmax=0, cmax=0;
    for (int i = 0; i < e; i++)
    {
        cmax = cmax + v[i];
        if(cmax>gmax)
        {
            gmax = cmax;
        }
        else if(cmax<0)
        {
            cmax = 0;
        }
    }
    return gmax;
    
}

//Driver Code
int main()
{
    int e;
    cin>>e;
    vector<int> v;
    for (int i = 0; i < e; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<getMax(v, e)<<endl;
    
    return 0;
}