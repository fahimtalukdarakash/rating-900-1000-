#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
           long long t,i,k,x,n,a;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>n;
                      for(k=2;k<=29;k++)
                      {
                                 a=pow(2,k)-1;
                                 if(n%a==0)
                                 {
                                            break;
                                 }
                                 else
                                 {
                                            continue;
                                 }
                      }
                      x=n/(pow(2,k)-1);
                      cout<<x<<endl;
           }
           return 0;
}
