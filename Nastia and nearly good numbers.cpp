#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long a,b,t;
           cin>>t;
           while(t--)
           {
                      cin>>a>>b;
                      if(b==1)
                      {
                                 cout<<"NO"<<endl;
                      }
                      else
                      {
                                 cout<<"YES"<<endl;
                                 cout<<a*(long long)b<<" "<<a<<" "<<a*(long long)(b+1)<<endl;
                      }
           }
           return 0;
}
