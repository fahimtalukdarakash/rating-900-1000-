#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int k,a[12],sum=0,cnt=0;
           cin>>k;
           for(int i=0;i<12;i++)
           {
                      cin>>a[i];
           }
           sort(a,a+12,greater<int>());
           for(int i=0;i<12;i++)
           {
                      if(sum>=k)
                      {
                               break;
                      }
                      else
                      {
                                 sum=sum+a[i];
                                 cnt++;
                      }
           }
           if(sum>=k)
           {
                      cout<<cnt<<endl;
           }
           else
           {
                      cout<<-1<<endl;
           }
           return 0;
}
