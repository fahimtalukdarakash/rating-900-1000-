#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int n,i,sum=0;
           cin>>n;
           for(i=1;i<=n-1;i++)
           {
                      sum=sum+(n-i)*i;
           }
           cout<<sum+n<<endl;
           return 0;
}
