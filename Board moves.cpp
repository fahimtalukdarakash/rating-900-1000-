#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long long t;
           cin>>t;
           while(t--)
           {
                      long long n;
                      cin>>n;
                      n=(n-1)/2;
                      cout<<((n*(n+1)*(2*n+1))/6)*8<<endl;
           }
           return 0;
}
