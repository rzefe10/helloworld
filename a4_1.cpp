#include<iostream>

using namespace std;

int main()
{
    int i = 0;
    int m, n, gcd;

    cout << "Enter two numbers to get the GCD: ";
    cin >> m >> n;

    while(n != 0)
    {
          gcd = m % n;
          m = n;
          n = gcd;
          i++;    
    }

    cout << "The GCD of the two numbers are : " << gcd << endl; 


    return 0;
}