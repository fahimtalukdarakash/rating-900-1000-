#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int n,m,i,j,k;
           cin>>n>>m;
           string a[m][2];
           for(i=0;i<m;i++)
           {
                      for(j=0;j<2;j++)
                      {
                                 cin>>a[i][j];
                      }
           }
           string b[n];
           for(i=0;i<n;i++)
           {
                      cin>>b[i];
           }
           for(i=0;i<n;i++)
           {
                      for(j=0;j<m;j++)
                      {
                                 for(k=0;k<2;k++)
                                 {
                                            if(b[i]==a[j][k])
                                            {
                                                       if(b[i].size()==a[j][0].size() && b[i].size()==a[j][1].size())
                                                       {
                                                                  cout<<a[j][0]<<" ";
                                                                  break;
                                                       }
                                                       else if(b[i].size()>a[j][0].size())
                                                       {
                                                                  cout<<a[j][0]<<" ";
                                                                  break;
                                                       }
                                                       else if(b[i].size()<a[j][1].size())
                                                       {
                                                                  cout<<b[i]<<" ";
                                                                  break;
                                                       }
                                                       else
                                                       {
                                                                  cout<<a[j][1]<<" ";
                                                                  break;
                                                       }
                                            }
                                            else
                                            {
                                                       continue;
                                            }
                                 }
                      }
           }
           return 0;
}
