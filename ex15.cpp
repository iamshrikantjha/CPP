//Class example
#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    int id;
    int distance;

    void distance_travelled();
    void display(int a, int b)
    {
        cout << "Car id is = " << a << " distance travelled is = " << b + 5;
    }
};

//Driver Code
int main()
{
    Car c1;
    c1.id = 16;
    c1.distance = 500;
    c1.display(16, 500);
    return 0;
}