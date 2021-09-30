#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int n,ans,balance,t;
           cin>>t;
           string s;
           while(t--){
                      ans=0;
                      balance=0;
                      cin>>n;
                      cin>>s;
                      for(int i=0;i<n;i++)
                      {
                                 if(s[i]=='(')
                                 {
                                            balance++;
                                 }
                                 else
                                 {
                                            balance--;
                                            if(balance<0)
                                            {
                                                       balance=0;
                                                       ans++;
                                            }
                                 }
                      }
                      cout<<ans<<endl;
           }
           return 0;

}
