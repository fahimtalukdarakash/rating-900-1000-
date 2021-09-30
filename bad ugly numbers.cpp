#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int t,n,i,j;
           cin>>t;
           while(t--)
           {
                      cin>>n;
                      if(n==1)
                      {
                                 cout<<-1<<endl;
                      }
                      else
                      {
                                 cout<<2;
                                 for(i=1;i<=n-1;i++)
                                 {
                                            cout<<3;
                                 }
                                 cout<<endl;
                      }
           }
           return 0;
}
