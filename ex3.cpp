#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll p; 
ll avg;
ll sum = 0;

vector<ll> sal;

int main()
{  
    ll count = 0;
    cin>>p;
    
    for(ll i=0; i<p; i++)
    {
        ll a;
        cin>>a;
        sum = sum + a;
        sal.push_back(a);
    }
    
    avg = ceil(1ll*sum/p);
    cout<<"after ceil"<<avg<<endl;
    for(auto i=sal.begin(); i!=sal.end(); i++)
    {
        ll val = *i;
        if(val>=avg)
        {
            count++;
        }
    }
    
    cout<<1ll*count*avg<<endl;
    return 0;
}