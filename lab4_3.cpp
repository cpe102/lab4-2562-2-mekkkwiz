#include<iostream>
using namespace std;

int findDivisor(int x)
{
    int s=2;
    while (s<x)
    {
        if (x%s==0)
        {
            return s;
        }
        else
        {
            s++;
        }
    }
}

int main()
{
    int x;          
    cout << "Enter you x : ";
    cin >> x;
    cout << "number is " << findDivisor(x);
    return 0;

}

