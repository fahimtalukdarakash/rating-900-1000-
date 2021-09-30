#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long long n,i,c,d;
           cin>>n;
           long long a[n];
           vector<long long> b;
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           sort(a,a+n);
           for(i=0;i<n;i++)
           {
                      if(i==0)
                      {
                                 c=abs(a[i]-a[i+1]);
                                 d=a[n-1]-a[i];
                                 cout<<c<<" "<<d<<endl;
                      }
                      else if(i>0 && i<n-1)
                      {
                                 c=min((abs(a[i]-a[i+1])),abs(a[i]-a[i-1]));
                                 d=max(abs(a[i]-a[n-1]),abs(a[i]-a[0]));
                                 cout<<c<<" "<<d<<endl;
                      }
                      else
                      {
                                 c=abs(a[i]-a[i-1]);
                                 d=a[n-1]-a[0];
                                 cout<<c<<" "<<d<<endl;
                      }
           }
           //c=*min_element(a,a+n);
           //d=*max_element(a,a+n);
           //for(i=c;i<=d;i++)
           //{
             //         b.push_back(i);
           //}
           return 0;
}
