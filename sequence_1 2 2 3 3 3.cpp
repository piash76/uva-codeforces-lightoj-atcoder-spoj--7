// CPP program to find the nth term of the series
// 1 2 2 3 3 3 ...
#include <bits/stdc++.h>
using namespace std;

// function to solve the quadratic equation
int term(int n)
{
    // calculating the Nth term
    int x = (((1) + (double)sqrt(1 + (8 * n))) / 2);
    return x;
}

// driver code to check the above function
int main()
{
    while(1)
    {

    int n;
    cin>>n;
    cout << term(n)<<endl; ///term 0th is 1 // term 1 2 is 2
    }

}
