#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int c = 2*b;
        int rem = a%c;
        if(rem>0)
        {
            rem = rem - b;
            if(rem>0)
            {
                cout<<"Dishant"<<endl;
            }
            else if(rem<=0)
            {
                cout<<"Arpa"<<endl;
            }        
        }
        else 
        {
            cout<<"Dishant"<<endl;
        }
        
    }

    return 0;
}