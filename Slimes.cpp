#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int n,c,i;
  string s;
  cin>>n;
  cin>>s;
  char ch=s[0];
  c=1;
  for(i=1;i<n;i++)
  {
      if(s[i]!=ch)
      {
          c++;
          ch=s[i];
      }
  }
  cout<<c<<endl;
}
