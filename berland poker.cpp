#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int n,m,k,t;
           cin>>t;
           while(t--)
           {
                      cin>>n>>m>>k;
                      if(m==0)
                      {
                                 cout<<0<<endl;
                      }
                      else if(n/k>=m)
                      {
                                 cout<<m<<endl;
                      }
                      else
                      {
                                 double a=n/k;
                                 double b=m-a;
                                 double c=ceil(b/(k-1));
                                 if(a==c)
                                 {
                                            cout<<0<<endl;
                                 }
                                 else
                                 {
                                            cout<<a-c<<endl;
                                 }
                      }
           }
           return 0;
}
