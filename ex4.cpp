#include<bits/stdc++.h>

int count = 0;
int h, w, h1, w1;

int getfolds(int a, int b)
{
    
    std::cout<<a<<b<<std::endl;
    if(a > b && a!=b)
    {
        if(a%2==0 && a/2>=b)
        {
            a = a/2;
            count++;
            std::cout<<count<<std::endl;
            return getfolds(a, b);
        }
        else
        {
            a = a - b;
            count++;
            std::cout<<count<<std::endl;
            return getfolds(a, b);
        }
    }
    else if(a <= b)
    {
        return count;
    }
   return 99; 
}

int pushval(int h,int w,int h1,int w1)
{
    int x = getfolds(h, h1);
    count = 0;
    int y = getfolds(w, w1);
    return x+y;
}


int main()
{
    
    std::cin>>h>>w>>h1>>w1;
    std::cout<<pushval(h, w, h1, w1)<<std::endl;

    return 0;
}