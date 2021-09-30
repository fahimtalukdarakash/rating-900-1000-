#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           string s;
           long long i,count1=0,count2=0;
           cin>>s;
           if(s[0]=='1')
           {
                      for(i=1;i<s.size();i++)
                      {
                                 if(s[i]=='1' || s[i]=='4')
                                 {
                                            continue;
                                 }
                                 else
                                 {
                                            count1++;
                                            break;
                                 }
                      }
                      if(count1==0)
                      {
                                 for(i=1;i<s.size();i++)
                                 {
                                            if(s[i]=='4' && s[i+1]=='4' && s[i+2]=='4')
                                            {
                                                       count2++;
                                                       break;
                                            }
                                            else
                                            {
                                                       continue;
                                            }
                                 }
                                 if(count2==0)
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
           else
           {
                      cout<<"NO"<<endl;
           }
}
