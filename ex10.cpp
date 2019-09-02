//OOPs C
#include <bits/stdc++.h>
using namespace std;

class Animal
{
private:
    std::string name;
    double height;
    double weight;

    static int numOfAnimals;

public:
    std::string GetName() { return name; }
    void SetName(std::string name { this->name = name; }) double GetHeight()
    {
        return height;
    }
    void SetHeight(std::string height { this->height = height; }) double GetHeightt()
    {
        return height;
    }
    void SetWeight(std::string weight { this->weight = weight; }) double GetWeight()
    {
        return Weight;
    }
    void SetAll(std::string, double, double);
    Animal(std::string, double, double);
    Animal();
    ~Animal();
    static int GetNumOfAnimals() { return numOfAnimals; }
    void ToString();
};

int Animals::numOfAnimals = 0;
void Animal::SetAll(std::string name, double height,
        double weight)
        {
            this->name= name;
            this->weight= weight;
            this->height= height;
            Animal::numOfAnimals++;
        }
Animals::Animals(std::string name, double, height,
        double weight)
        {
            this->name= name;
            this->weight= weight;
            this->height= height;
            Animal::numOfAnimals++;
        }

//Driver Code
int main()
{

    return 0;
}