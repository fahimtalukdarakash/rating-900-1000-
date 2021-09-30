#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
           int t;
	cin >> t;
           for(int i=1;i<=t;i++)
           {
                      int n,a,b;
                      cin>>n>>a>>b;
                      for(int j=0;j<n;j++)
                      {
                                 cout<<char('a'+j%b);
                      }
                      cout<<endl;
           }

	return 0;
}
