#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int t,x,n,m,i,j;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>x>>n>>m;
                      if(x-m*10<=0)
                      {
                                 cout<<"YES"<<endl;
                      }
                      else
                      {
                      for(j=1;j<=n;j++)
                      {
                                 x=(x/2)+10;
                      }
                      x=x-m*10;
                      if(x>0)
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
