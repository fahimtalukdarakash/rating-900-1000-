#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long long q,a,b,n,s;
           cin>>q;
           while(q--)
           {
                      cin>>a>>b>>n>>s;
                      if(s%n<=b)
                      {
                                 if((a*n+b)>=s)
                                 {
                                            cout<<"YES"<<endl;
                                 }
                                 else
                                 {
                                            cout<<"NO"<<endl;
                                 }
                      }
                      else
                      {
                                 cout<<"NO"<<endl;
                      }
           }
           return 0;
}
