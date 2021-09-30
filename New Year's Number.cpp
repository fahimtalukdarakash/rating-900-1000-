#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long t,n,i,y,x;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>n;
                      if(n<2020)
                      {
                                 cout<<"NO"<<endl;
                      }
                      else
                      {
                                 y=n%2020;
                                 x=(n-2021*y)/2020;
                                 if(x>=0)
                                 {
                                            cout<<"YES"<<endl;
                                 }
                                 else
                                 {
                                            cout<<"NO"<<endl;
                                 }
                      }
           }
           return 0;
}
