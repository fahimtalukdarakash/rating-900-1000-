#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int n,i,cnt1=0,cnt2=0;
           string s;
           cin>>n;
           cin>>s;
           for(i=0;i<n;i++)
           {
                      if(s[i]=='0')
                      {
                                 cnt1++;
                      }
                      else
                      {
                                 continue;
                      }
           }
           for(i=0;i<n;i++)
           {
                      if(s[i]=='1')
                      {
                                 cnt2++;
                      }
                      else
                      {
                                 continue;
                      }
           }
           if(cnt1>cnt2)
           {
                      cout<<cnt1-cnt2<<endl;
           }
           else
           {
                      cout<<cnt2-cnt1<<endl;
           }
           return 0;
}
