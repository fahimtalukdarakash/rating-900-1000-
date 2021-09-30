#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int n,i,j;
           cin>>n;
           string s,s2,s3,s4;
           cin>>s;
           int count1,count2=0;
           for(i=0;i<n-1;i++)
           {
                      count1=0;
                      s3=s.substr(i,i+1);
                      for(j=0;j<n-1;j++)
                      {
                                 s4=s.substr(j,j+1);
                                 if(s[j]==s[i]&&s[j+1]==s[i+1])
                                 {
                                        count1++;
                                 }

                      }
                      if(count2<count1){
                                            count2=count1;
                                            s2=string(1, s[i]) + string(1, s[i + 1]);
                                       }

           }
           cout<<s2<<endl;
           return 0;
}
