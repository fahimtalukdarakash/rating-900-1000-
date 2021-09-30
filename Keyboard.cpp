#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           string s1,s2;
           char c;
           int i,j;
           s1="qwertyuiopasdfghjkl;zxcvbnm,./";
           cin>>c;
           cin>>s2;
           if(c=='R')
           {
                      for(i=0;i<s2.size();i++)
                      {
                                 for(j=0;j<s1.size();j++)
                                 {
                                            if(s2[i]==s1[j])
                                            {
                                                       cout<<s1[j-1];
                                            }
                                            else
                                            {
                                                       continue;
                                            }
                                 }
                      }
                      cout<<endl;
           }
           else
           {
                      for(i=0;i<s2.size();i++)
                      {
                                 for(j=0;j<s1.size();j++)
                                 {
                                            if(s2[i]==s1[j])
                                            {
                                                       cout<<s1[j+1];
                                            }
                                            else
                                            {
                                                       continue;
                                            }
                                 }
                      }
                      cout<<endl;
           }
           return 0;
}
