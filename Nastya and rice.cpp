#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int t,n,a,b,c,d;
           cin>>t;
           while(t--)
           {
                      cin>>n>>a>>b>>c>>d;
                      if(((a-b)*n>=c-d && (a-b)*n<=c+d)|| ((a+b)*n>=c-d && (a+b)*n<=c+d) || (c-d>=(a-b)*n && c-d<=(a+b)*n) || (c+d>=(a-b)*n && c+d<=(a+b)*n))
                      {
                                 cout<<"YES"<<endl;
                      }
                      else
                      {
                                 cout<<"NO"<<endl;
                      }
           }
           return 0;
}
