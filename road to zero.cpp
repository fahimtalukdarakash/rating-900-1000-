#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int t;
           cin>>t;
           while(t--)
           {
                      long long x,y,a,b,i,sum=0;
                      cin>>x>>y;
                      cin>>a>>b;
                      if(x==0 && y==0)
                      {
                                 cout<<0<<endl;
                      }
                      else
                      {
                                 if(a+a<=b)
                                 {
                                            sum=sum+(x+y)*a;
                                            cout<<sum<<endl;
                                 }
                                 else
                                 {
                                            sum=sum+min(x,y)*b;
                                            sum=sum+(max(x,y)-min(x,y))*a;
                                            cout<<sum<<endl;
                                 }

                      }

           }
           return 0;
}
