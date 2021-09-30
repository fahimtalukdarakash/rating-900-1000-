#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int t,n,i;
           cin>>t;
           while(t--)
           {
                      cin>>n;
                      int a[n+1],b=0;
                      for(i=1;i<=n;i++)
                      {
                                 cin>>a[i];
                      }
                      sort(a+1,a+n+1);
                      for(i=n;i>=1;i--)
                      {
                                 if(i>=a[i])
                                 {
                                       b=i;
                                       break;
                                 }
                      }
                      cout<<b+1<<endl;
           }
           return 0;
}
