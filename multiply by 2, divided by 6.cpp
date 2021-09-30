#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           long long n,t,i,cnt1=0,cnt2=0,cnt3=0,j,a,b;
           cin>>t;
           for(i=1;i<=t;i++)
           {
                      cin>>n;
                      if(n==1)
                      {
                                 cout<<0<<endl;
                      }
                      else
                      {
                                 while(n%2==0)
                                 {
                                            cnt2++;
                                            n=n/2;
                                 }
                                 while(n%3==0)
                                 {
                                            cnt3++;
                                            n=n/3;
                                 }
                                 if((n==1)&&(cnt2<=cnt3))
                                 {
                                            cout<<(cnt3-cnt2)+cnt3<<endl;
                                 }
                                 else
                                 {
                                            cout<<-1<<endl;
                                 }
                                 cnt2=0;
                                 cnt3=0;
                      }
           }
           return 0;
}
