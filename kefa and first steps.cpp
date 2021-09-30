#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long n,i,count=0,count2=0;
           cin>>n;
           long a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           for(i=0;i<n-1;i++)
           {
                      if(a[i+1]>=a[i])
                      {
                                 count++;
                      }
                      else
                      {
                                 if(count>=count2)
                                 {
                                            count2=count;
                                 }
                                 count=0;
                      }
           }
           if(count2>=count)
           {
                      cout<<count2+1<<endl;
           }
           else
           {
                      cout<<count+1<<endl;
           }
           return 0;
}
