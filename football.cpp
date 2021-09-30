#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int n,count1=0,count2=0;
           cin>>n;
           string a[n];
           for(int i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           string b,c;
           b=a[0];
           for(int i=0;i<n;i++)
           {
                  if(a[i]==b)
                  {
                             count1++;
                  }
                  else
                  {
                             c=a[i];
                             count2++;
                  }
           }
           if(count1>count2){
                      cout<<b<<endl;
           }
           else
           {
                      cout<<c<<endl;
           }
           return 0;
}
