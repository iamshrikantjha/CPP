//Dynamic Coin Change Practise
#include<bits/stdc++.h>
using namespace std;

//DP function
int getways(vector<int> ar, int amount)
{
    int i, j;
    int size = ar.size();
    int table[size+1][amount+1];

    //filling first col as 1+1
    for(i=0; i<size+1; i++)
    {
        table[i][0] = 1;
    }
    //for all rows as 0
    for(i=0; i<size+1; i++)
    {
        for(j=1; j<amount+1; j++)
        {
            table[i][j]=0;
        }
    }

    //Main DP section
    for (i = 1; i < size+1; i++)
    {
        for (j = 1; j < amount+1; j++)
        {
            if(j>=ar[i-1])
            {
                table[i][j] = table[i][j-ar[i-1]] + table[i-1][j];
            }
            else
            {
                table[i][j] = table[i-1][j];
            }
        }
        
    }

    //Print table
    for(i=0; i<size+1; i++)
    {
        for(j=0; j<amount+1; j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return table[size][amount];
    
    
} 

//Driver Code
int main()
{
    int amount = 10;
    vector<int> ar={2, 5, 3, 6};
    for(auto i=ar.begin(); i<ar.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<getways(ar, amount)<<endl;
    
    return 0;
}