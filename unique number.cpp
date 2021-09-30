#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int t,x,i;
           cin>>t;
           while(t--)
           {
                      cin>>x;
                      if(x>45)
                      {
                                 cout<<-1<<endl;
                      }
                      else if(x<10)
                      {
                                 cout<<x<<endl;
                      }
                      else
                      {
                                 vector<int> a;
                                 for(i=9;i>0;i--)
                                 {

                                            if(x-i>0)
                                            {
                                                       a.push_back(i);
                                                       x=x-i;
                                            }
                                            else
                                            {
                                                       break;
                                            }
                                 }
                                 cout<<x;
                                 sort(a.begin(),a.end());
                                 for(int i:a)
                                 {
                                            cout<<i;
                                 }
                                 cout<<endl;
                      }
           }
}
