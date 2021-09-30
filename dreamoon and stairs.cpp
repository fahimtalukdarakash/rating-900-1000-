#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           double n;
           int m,i;
           cin>>n>>m;
           if(n<m){
                      cout<<-1<<endl;
           }
           else
           {
                      for(i=ceil(n/2);i<=n;i++)
                      {
                                 if(i%m==0)
                                 {
                                            cout<<i<<endl;
                                            break;
                                 }
                                 else
                                 {
                                            continue;
                                 }
                      }
           }
           return 0;
}
