#include<bits/stdc++.h>
using namespace std;

class rectangle
{
    int l,b;
public:
    void getval()
    {
        cin>>l>>b;
    }
    friend void area(rectangle a);
};

void area(rectangle a)
{
    cout<<a.l*a.b<<endl;
}
int main()
{
    rectangle r;
    r.getval();
    area(r);
}
