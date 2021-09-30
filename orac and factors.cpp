#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long long n,k,t,i;
           cin>>t;
           while(t--)
           {
                      cin>>n>>k;
                      if(n%2==0)
                      {
                                 cout<<n+2*k<<endl;
                      }
                      else
                      {
                                 for(i=2;i<=n;i++)
                                 {
                                            if(n%i==0)
                                            {
                                                       cout<<n+2*(k-1)+i<<endl;
                                                       break;
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
