#include<bits/stdc++.h>

using namespace std;

int main()
{
 int t;
 cin>>t;

 while(t--)
 {

   int i,kk,j,n,m,rem;
   double x,y,z,k,ans;
   int a[1000];
   cin>>n>>m;

   for(j=0;j<n;j++)
   {
       int mx=0;
    for(i=1;i<=m;i++)
    {
     cin>>x>>y>>z;
     k=(x)+(y)-(x*y)/100;
     ans=(k)+(z)-(k*z)/100;
     cout<<ans<<"<-- ans ";
     if(ans>mx)
     {
         mx=ans;
         rem=i;
     }
    }
   a[j]=rem;
   }

   for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
 }
return 0;
}
