//STL GOD
#include<bits/stdc++.h>
using namespace std;

//Driver Code
vector<int> showvec(vector<int> vec)
{
    for(auto i=vec.begin(); i!=vec.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    return vec;
}

void hector()
{
    vector<int> A = {11, 25, 22, 8, 9, 12};
    cout<<A[0]<<endl;
    sort(A.begin(),A.end()); //O(NlogN)
    bool present = binary_search(A.begin(), A.end(), 9);
    // present = binary_search(A.begin(), A.end(), 4);
    cout<<present<<endl;
    A.push_back(100);
    present = binary_search(A.begin(), A.end(), 10);
    cout<<present<<endl;
    A.push_back(50);
    A.push_back(50);
    A.push_back(50);
    A.push_back(50);
    A.push_back(50);
    showvec(A);
    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);
    // vector<int>::iterator it2 = upper_bound(A.begin(), A.end());
    cout<<*it<<endl;
}

void setter()
{
    set<int> S;
    S.insert(1);
    S.insert(11);
    S.insert(-1);
    S.insert(-21);
    S.insert(19);
    S.insert(1);
    for(int x: S)
    {
        cout<< x <<" ";
    }
    cout<<endl;
}

int main()
{
    // hector();
    setter();
}