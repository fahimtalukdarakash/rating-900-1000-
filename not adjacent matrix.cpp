#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int n,t,i,j;
           cin>>t;
           while(t--)
           {
                      cin>>n;
                      int a[n][n];
                      if(n==2)
                      {
                                 cout<<-1<<endl;
                      }
                      else if(n==1)
                      {
                                 cout<<1<<endl;
                      }
                      else
                      {
                                 int b;
                                 b=1;
                                 for(i=0;i<n;i++)
                                 {
                                         for(j=0;j<n;j++)
                                         {
                                                    if(b<=(n*n))
                                                    {
                                                          a[i][j]=b;
                                                          b=b+2;
                                                    }
                                                    else
                                                    {
                                                               b=2;
                                                               a[i][j]=b;
                                                               b=b+2;
                                                    }
                                         }
                                 }
                                 for(i=0;i<n;i++)
                                 {
                                            for(j=0;j<n;j++)
                                            {
                                                       cout<<a[i][j]<<" ";
                                            }
                                            cout<<endl;
                                 }
                                 cout<<endl;
                      }
           }
           return 0;
}
