//Shift Z to end
#include <bits/stdc++.h>
using namespace std;

void printa(vector<int> a, int e)
{
    for (int i = 0; i < e; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void modify(vector<int> &a, int e)
{
    int count = 0;
    for (int i = 0; i < e; i++)
    {
        if (a[i] != 0)
        {
            // cout<<a[i]<<endl;
            swap(a[count++], a[i]);
            // cout<<"After swapping"<<a[i]<<endl;
            
        }
    }
    cout<<"Within function"<<endl;
    printa(a, e);
    cout<<"Function closes"<<endl;
}

//Driver Code
int main()
{
    int e;
    cin >> e;
    vector<int> a;
    for (int i = 0; i < e; i++)
    {
        int b;
        cin >> b;
        a.push_back(b);
    }
    // printa(a, e);  
    modify(a, e);
    printa(a, e);
    // cout<<a.size()<<endl; 
    return 0;
}
