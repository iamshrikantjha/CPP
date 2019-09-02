//maps
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//Driver Code
int main()
{
    // int e;
    // cin>>e;
    map<char, int> roman;
    roman.insert(pair<char, int>('A', 1));
    roman.insert(pair<char, int>('B', 2));
    roman.insert(pair<char, int>('C', 3));
    map<char, int>::iterator itr; 
    // for (itr = roman.begin(); itr !=roman.end(); itr++)
    // {
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }
    
    for(auto x:roman)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}