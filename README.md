# qqq
题目：
输入n个整点在平面上的坐标。对于每个点，可以控制所有位于它左下方的点(即x、y坐标都比它小)，它可以控制的点的数目称为“战斗力”。依次输出每个点的战斗力，最后输出战斗力最高的点的编号(如果若干个点的战斗力并列最高，输出其中最大的编号)。

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
      f[i]= (1) ;
      for(j=1; j<=n; j++){
        if(x[j]<x[i] && (2) )
          (3);
      }
      if( (4) ){
        max_f=f[i];
        (5);
      }
    }
    for(i=1; i<=n; i++)
      cout<<f[i]<<endl;
    cout<<ans<<endl;
    return 0;
}
输入
第一行输入n

接下来n行每行输入两个整数xi, yi，表示第i个坐标(1<=n<=1000, 0<=xi, yi<=1000)

输出
依次输出每个点的战斗力，最后输出战斗力最高的点的编号(如果若干个点的战斗力并列最高，输出其中最大的编号)
求助！
