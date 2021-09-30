#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           uint64_t i,n,t,p,count=0,a;
           cin>>t;
           for(i=1;i<=t;i++)
           {
               cin>>n;
               if(n==2)
               {
                          cout<<"NO"<<endl;
               }
               else
               {
                          while(n%2==0)
                          {
                                     n=n/2;
                          }
                          if(n==1)
                          {
                                     cout<<"NO"<<endl;
                          }
                          else
                          {
                                     cout<<"YES"<<endl;
                          }
               }
           }
           return 0;
}
