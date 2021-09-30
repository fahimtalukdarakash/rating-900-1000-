#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int t,cnt1=0,cnt2=0,a,i;
           cin>>t;
           while(t--)
           {
                      string s;
                      cin>>s;
                      for(i=0;i<s.size();i++)
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
                      for(i=0;i<s.size();i++)
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
                      if(cnt1==0 || cnt2==0)
                      {
                                 cout<<"NET"<<endl;
                      }
                      else if(cnt1==1 || cnt2==1)
                      {
                                 cout<<"DA"<<endl;
                      }
                      else if(cnt1==cnt2)
                      {
                                 a=(cnt1+cnt2)/2;
                                 if(a%2==0)
                                 {
                                            cout<<"NET"<<endl;
                                 }
                                 else
                                 {
                                            cout<<"DA"<<endl;
                                 }
                      }
                      else if(cnt1>cnt2)
                      {
                                 a=(cnt2+cnt2)/2;
                                 if(a%2==0)
                                 {
                                            cout<<"NET"<<endl;
                                 }
                                 else
                                 {
                                            cout<<"DA"<<endl;
                                 }
                      }
                      else
                      {
                                 a=(cnt1+cnt1)/2;
                                 if(a%2==0)
                                 {
                                            cout<<"NET"<<endl;
                                 }
                                 else
                                 {
                                            cout<<"DA"<<endl;
                                 }
                      }
                      cnt1=0;
                      cnt2=0;
           }
           return 0;
}
