#include<bits/stdc++.h>
using namespace std;

class student
{
    int r;
    static int c;
public:
    void getrol()
    {
        cin>>r;
        c++;
    }
    void putrol()
    {
        cout<<r<<endl;
    }
    static void putcnt()
    {
        cout<<c<<endl;
    }
};
int student::c;

int main()
{
    cout<<"Initially number of objects: 0"<<endl;
    int n,i;
    cout<<"Enter number of entry: ";
    cin>>n;
    student a[n];
    for(i=0;i<n;i++)
    {
        a[i].getrol();
    }
    student::putcnt();
    for(i=0;i<n;i++)
    {
        cout<<"Roll No:  ";
        a[i].putrol();
    }
}
