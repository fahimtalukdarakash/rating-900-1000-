#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int t,i;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      long long n;
                      cin>>n;
                      long long a[n];
                      string b;
                      for(int j=0;j<n;j++)
                      {
                                 cin>>a[j];
                      }
                      sort(a,a+n,greater<>());
                      b=to_string(a[0]*a[1]);
                      cout<<b<<endl;
           }
           return 0;
}
