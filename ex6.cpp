//Label
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono; 

//Driver Code
int main()
{
    auto start = high_resolution_clock::now();
    int e;
    vector<int> count(e, 0);
    vector<char> ar; 
    cin>>e;
    for(int i=0; i<e; i++)
    {
        char a;
        cin>>a;
        ar.push_back(a);
        ar[i]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int b;
        cin>>b;
        std::cout<<std::count(ar.begin(), ar.begin()+b-1, ar[b-1])<<endl;
    }
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start); 
  
    // To get the value of duration use the count() 
    // member function on the duration object 
    cout << "Time taken by function: "<< duration.count()/1000<< " miliseconds" << endl; 
    return 0;
}