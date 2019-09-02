// Dynamic Programming Coin Change
#include<bits/stdc++.h>
using namespace std;

int getways(int arr[], int m, int n)
{
    int i, j;
    int table[m+1][n+1];
    //filling first col as 1+1
    for(i=0; i<m+1; i++)
    {
        table[i][0] = 1;
    }
    //for all rows as 0
    for(i=0; i<m+1; i++)
    {
        for(j=1; j<n+1; j++)
        {
            table[i][j]=0;
        }
    }
    //populating table bottom up
    for(i=1; i<m+1; i++)
    {
        for(j=1; j<n+1; j++)
        {
            if(j>=arr[i-1])
            {
                table[i][j] = table[i][j-arr[i-1]] + table[i-1][j];
            }
            else
            {
                table[i][j] = table[i-1][j];
            }
        }
    }

    //print table
    for(i=0; i<m+1; i++)
    {
        for(j=0; j<n+1; j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return table[m][n];

}

int main()
{
    int arr[]={1, 2, 3};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = 10;
    cout<<getways(arr, m, n)<<endl;
    
    cout<<endl;
    return 0;
}