//
// Created by king23 on 2020/12/16.
//
#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
 int t[1000];
 int len_left[1000],len_right[1000];//最大上升序列与最大下降序列
 int ans;
/////////ans=max{n-len_left[i]-len_right[i]+1}   加上被重复减去的中间最大值
 int main(){
     int n;
     scanf("%d",&n);
     for(int i=1;i<=n;i++){
         scanf("%d",&t[i]);
         len_left[i]=1,len_right[i]=1;///初始化留下的人数，至少右一个吧
     }
     for(int i=1;i<=n;i++) {
         for (int j = 1; j < i; j++) {
             if (t[i] > t[j]) len_left[i] = max(len_left[i], len_left[j] + 1);
             //如果i位置的值大于j位置的，这是可以作为上升子序列
             //比较不取i位置和取i位置哪个留下的人多
         }
     }
     for(int i=n;i>=1;i--){
         for(int j=n;j>i;j--){
             if(t[i]>t[j]) len_right[i]=max(len_right[i],len_right[j]+1);//比较不取i位置和取i位置哪个留下的人多
             //可以作为下降
         }
     }
     for(int i=1;i<=n;i++){
         ans=max(ans,(len_left[i]+len_right[i]-1));
     }
     cout<<n-ans<<endl;
     return 0;
 }
