#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long long t;
           cin>>t;
           while(t--)
           {
                      long double a,b,c,d,x;
                      cin>>a>>b>>c>>d;
                      if(b>=a)
                      {
                                 cout<<b<<endl;
                      }
                      else if(c<=d)
                      {
                                 cout<<-1<<endl;
                      }
                      else
                      {
                                 x=ceil((a-b)/(c-d));
                                 cout<<setprecision(20);
                                 cout<<b+x*c<<endl;
                      }
           }
           return 0;
}
