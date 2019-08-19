#include<bits/stdc++.h>
using namespace std;
const int SIZE=1005;
int x[SIZE],y[SIZE],f[SIZE];
int n,i,j,max_f,ans;
int main(){
    cin>>n;
    for(i=1; i<=n; i++)
      cin>>x[i]>>y[i];
    max_f=0;
    for(i=1; i<=n; i++){
      f[i]= 0;
      for(j=1; j<=n; j++){
        if(x[j]<x[i] && y[j]<y[i] )
          f[i]=f[i]+1;
      }
      if( (i>1)&&(f[i]>f[i-1])  ){
        max_f=f[i];
        ans=max_f+1;
      }
    }
    for(i=1; i<=n; i++)
      cout<<f[i]<<endl;
    cout<<ans<<endl;
    return 0;
}
