//Spoj Rectangles
#include<bits/stdc++.h>
using namespace std;

int getr(int i)
{
    int sett = 0;
    for(int i=1; i<=i; i++)
    {
        if(i%2==0)
        {
            sett++;
        }
    }
}

//Driver Code
int main()
{
    int v, netrec = 0;
    cin>>v;
    for(int i=1; i<=v; i++)
    {
        netrec = netrec + getr(i);
    }
    return 0;
}