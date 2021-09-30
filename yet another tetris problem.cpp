#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int t;
           cin>>t;
           while(t--)
           {
                      int n,count1=0;
                      cin>>n;
                      int a[n];
                      for(int i=0;i<n;i++)
                      {
                                 cin>>a[i];
                      }
                      if(a[0]%2==0)
                      {
                                 for(int i=0;i<n;i++)
                                 {
                                            if(a[i]%2==0)
                                            {
                                                    count1++;
                                            }
                                            else
                                            {
                                                       count1=0;
                                                       break;
                                            }
                                 }
                                 if(count1>0)
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
                                 for(int i=0;i<n;i++)
                                 {
                                            if(a[i]%2!=0)
                                            {
                                                    count1++;
                                            }
                                            else
                                            {
                                                       count1=0;
                                                       break;
                                            }
                                 }
                                 if(count1>0)
                                 {
                                            cout<<"YES"<<endl;
                                 }
                                 else
                                 {
                                            cout<<"NO"<<endl;
                                 }
                      }
           }
           return 0;
}
