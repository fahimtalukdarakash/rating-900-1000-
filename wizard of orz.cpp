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
                      string s="989";
                      if(n<=3)
                      {
                                 cout<<s.substr(0,n)<<endl;
                      }
                      else
                      {
                                 i=0;
                                 cout<<s;
                                 for(j=1;j<=n-3;j++)
                                 {
                                            if(i==9)
                                            {
                                                       cout<<9;
                                                       i=0;
                                            }
                                            else
                                            {
                                                       cout<<i;
                                                       i++;
                                            }
                                 }
                      }
                      cout<<endl;
           }
           return 0;
}
