#include<iostream>
using namespace std;
int main(){
long long int b,c,n,i,k,l=0,j;
cin>>n>>k;
long long int m[n],a[n];
for(i=0;i<n;i++){
    cin>>m[i];
    if(l<m[i])l=m[i];
}
if(k%2==0 && k>0)k=2;
else if(k==0)k=0;
else k=1;
for(j=1;j<=k;j++){

    for(i=0;i<n;i++){
        m[i]=l-m[i];
    }l=0;
    for(i=0;i<n;i++){
        if(l<m[i])l=m[i];
    }
}
for(i=0;i<n;i++)
    cout<<m[i]<<" ";
cout<<endl;
}

