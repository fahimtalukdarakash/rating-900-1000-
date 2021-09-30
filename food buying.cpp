#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long t;
           cin>>t;
           while(t--)
           {
                      long n,a,b;
                      cin>>n;
                      if(n<10)
                      {
                                 a=n;
                      }
                      else
                      {
                      a=n;
                      while(n>=10)
                      {
                                 b=n%10;
                                 n=n/10;
                                 a=a+n;
                                 n=n+b;
                      }
                      }
                      cout<<a<<endl;
           }
           return 0;
}
