//Codechef football
#include <bits/stdc++.h>
using namespace std;

//Driver Code
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<int> pen;
		vector<int> sco;
		int p;
		cin >> p;

		for (int i = 0; i < p; i++)
		{
			int x;
			cin >> x;
			sco.push_back(x);
		}

		for (int j = 0; j < p; j++)
		{
			int y;
			cin >> y;
			pen.push_back(y);
		}

		// Input Complete
		vector<int> f;
		for (int k = 0; k < p; k++)
		{
			int final = sco.at(k) * 20 - pen.at(k) * 10;
			f.push_back(final);
		}
		auto it = std::max_element(f.begin(), f.end());
		int value = *it;
		if(value <= 0)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout << *it << endl;
		}
		
		// for (auto it=f.begin(); it != f.end(); ++it) 
        // cout << ' ' << *it; 
		//p
		// int *i1;
		// i1 = std::max_element(f);
		// int i2 = *i1;
		// if (i2 <= 0)
		// {
		// 	return 0;
		// }
		// else
		// {
		// 	cout << i2 << endl;
		// }
		// //p
		// for (int z : f)
		// {
		// 	cout << z << " ";
		// }
		// cout << endl;
	}
	return 0;
}


// 2
// 3
// 40 30 50
// 2 4 20
// 1
// 0
// 10