
#include <bits/stdc++.h>
using namespace std;

// Function to return the string after
// reversing characters in the range [L, R]
string rev(string str, int len, int l, int r)
{


    while (l < r) {

        // Swap(str[l], str[r])
        char c = str[l];
        str[l] = str[r];
        str[r] = c;

        l++;
        r--;
    }

    return str;
}

// Driver code
int main()
{
    string str;
    cin>>str;
    int len = str.length();
    int l = 1, r = 3;

    cout << rev(str, len, l, r);

    return 0;
}
