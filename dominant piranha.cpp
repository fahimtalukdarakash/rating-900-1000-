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
                      int a[n],count1=0;
                      for(i=0;i<n;i++)
                      {
                                 cin>>a[i];
                      }
                      for(i=0;i<n-1;i++)
                      {
                                 if(a[i]==a[i+1])
                                 {
                                            continue;
                                 }
                                 else
                                 {
                                            count1++;
                                            break;
                                 }
                      }
                      if(count1>0)
                      {
                                 int b=distance(a, max_element(a, a + n));
                                 if(b==0)
                                 {
                                            for(i=0;i<n-1;i++)
                                            {
                                                       if(a[b]==a[i+1])
                                                       {
                                                                  b=i+1;
                                                       }
                                                       else
                                                       {
                                                                  break;
                                                       }
                                            }
                                            cout<<b+1<<endl;
                                 }
                                 else
                                 {
                                            cout<<b+1<<endl;
                                 }
                      }
                      else
                      {
                                 cout<<-1<<endl;
                      }
           }
           return 0;
}
