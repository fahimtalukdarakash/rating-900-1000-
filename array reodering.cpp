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
                      int a[n],count1=0;
                      for(i=0;i<n;i++)
                      {
                                 cin>>a[i];
                      }
                      sort(a,a+n);
                      vector<int> v,v1;
                      for(i=0;i<n;i++)
                      {
                                 if(a[i]%2==0)
                                 {
                                            v.push_back(a[i]);
                                 }
                                 else
                                 {
                                            v1.push_back(a[i]);
                                 }
                      }
                      for(i=0;i<v.size();i++)
                      {
                                 count1=count1+(n-(i+1));
                      }
                      sort(v1.begin(),v1.end());
                      for(i=0;i<v1.size();i++)
                      {
                                 for(j=i+1;j<v1.size();j++)
                                 {
                                            if(__gcd(v1[i],v1[j])>1)
                                            {
                                                       count1++;
                                            }
                                            else
                                            {
                                                       continue;
                                            }
                                 }
                      }
                      cout<<count1<<endl;
           }
           return 0;
}
