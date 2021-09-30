#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int t;
           cin>>t;
           while(t--)
           {
                      long double n,k;
                      cin>>n>>k;
                      cout<<setprecision(14);
                      cout<<floor((ceil(n/k)*k+n-1)/n)<<endl;
           }
           return 0;
}
