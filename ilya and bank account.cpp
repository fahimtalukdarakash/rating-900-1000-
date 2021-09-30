#include<bits/stdc++.h>
using namespace std;
int main()
{
           long long n,a,b;
           string str;
           cin>>n;
           str=to_string(n);
           if(n>0)
           {
                      cout<<n<<endl;
           }
           else if(str.size()==3)
           {
                      a=-(n%10);
                      b=-((n/10)%10);
                      if(a>b)
                      {
                                 cout<<-b<<endl;
                      }
                      else
                      {
                                 cout<<-a<<endl;
                      }
           }
           else
           {
                      a=-(n%10);
                      b=-((n/10)%10);
                      if(a>b)
                      {
                                 for(int i=0;i<str.size()-2;i++)
                                 {
                                            cout<<str[i];
                                 }
                                 cout<<b;
                      }
                      else
                      {
                                 for(int i=0;i<str.size()-2;i++)
                                 {
                                            cout<<str[i];
                                 }
                                 cout<<a;
                      }
                      cout<<endl;
           }
}
